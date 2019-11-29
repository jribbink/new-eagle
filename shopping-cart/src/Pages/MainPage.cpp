/*
 * MainPage.cpp
 *
 *  Created on: Nov. 4, 2019
 *      Author: jordan
 */

#include "MainPage.h"
#include "../MainWindow.h"

#include <gtkmm/label.h>
#include <stdlib.h>

//#include <curlpp/cURLpp.hpp>
//#include <curlpp/Options.hpp>

//Tree model columns:
class ModelColumns : public Gtk::TreeModel::ColumnRecord
{
public:

ModelColumns() { add(m_col_id); add(m_col_name); add(m_col_price); }

Gtk::TreeModelColumn<unsigned long long> m_col_id;
Gtk::TreeModelColumn<Glib::ustring> m_col_name;
Gtk::TreeModelColumn<double> m_col_price;
};

ModelColumns m_Columns;
Glib::RefPtr<Gtk::ListStore> itemListStore;

char currentBarcode[13] = { '\0' };
guint32 tLastKeystroke = 0;

double total = 0;

//curlpp::Cleanup myCleanup;

namespace NESC::Pages
{
	MainPage::MainPage() {
		ImportGlade("main");
        
        Gtk::Button* payBtn;
        builder->get_widget("payBtn", payBtn);
        payBtn->signal_clicked().connect(sigc::mem_fun(*this, &MainPage::payBtnPress));
        
        Gtk::TreeView *items;
        builder->get_widget("ItemView", items);
        
        items->append_column("ID", m_Columns.m_col_id);
        items->append_column("Name", m_Columns.m_col_name);
        items->append_column_numeric("Price", m_Columns.m_col_price, "$%.2f");
        
        items->get_column(0)->set_fixed_width(120);
        items->get_column(1)->set_fixed_width(220);
        
        itemListStore = Gtk::ListStore::create(m_Columns);
        items->set_model(itemListStore);
        
        //Connect to keypress event
        ((MainWindow*)(this->get_toplevel()))->add_events(Gdk::KEY_PRESS_MASK);
        ((MainWindow*)(this->get_toplevel()))->signal_key_press_event().connect(sigc::mem_fun(*this, &MainPage::keyPress), false);
	}
    
    void addItem(Gtk::TreeModel::Row &row, Glib::ustring name, double price)
    {
        row[m_Columns.m_col_name] = name;
        row[m_Columns.m_col_price] = price;
        total += price;
    }
    
    void MainPage::barcodeHandler(char* barcode)
    {
        unsigned long long code = strtoull(barcode, NULL, 10);
        Gtk::TreeModel::Row row = *(itemListStore->append());
        row[m_Columns.m_col_id] = code;
        
        switch(code)
        {
            case 180854000101:
                addItem(row, "Redbull", 2.49);
                break;
            case 055577420232:
                addItem(row, "Gatorade", 2.99);
                break;
            case 640522710829:
                addItem(row, "Raspberry pi touchscreen", 129.99);
                break;
        }
    }
    
    gboolean MainPage::keyPress(GdkEventKey *key)
    {
        if(!*currentBarcode || (key->time - tLastKeystroke) < 50)
        {
            if(key->keyval >= 48 && key->keyval <= 57)
                strcat(currentBarcode, (char*)&key->keyval);
            else if (key->keyval != 65293)
                strcpy(currentBarcode, new char { '\0' });
        }
        else
        {
            strcpy(currentBarcode, new char { '\0' });
        }
        
        if(strlen(currentBarcode) == 12 && key->keyval == 65293)
        {
            //thread(&MainPage::barcodeHandler, this, currentBarcode);
            barcodeHandler(currentBarcode);
            strcpy(currentBarcode, new char { '\0' });
        }
        else
        {
            tLastKeystroke = key->time;
        }
        
        return true;
    }
    
    void MainPage::payBtnPress()
    {
		PaymentPage* payment = new PaymentPage(total);
		Globals::container->add(*payment, "payment");
		payment->show();
		Globals::container->set_visible_child(*payment);
    }

	MainPage::~MainPage() {
		// TODO Auto-generated destructor stub
	}
}

##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=shopping-cart
ConfigurationName      :=Debug
WorkspacePath          :=/home/pi/new-eagle
ProjectPath            :=/home/pi/new-eagle/shopping-cart
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=
Date                   :=11/20/19
CodeLitePath           :=/home/pi/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="shopping-cart.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  $(shell pkg-config --libs gtkmm-3.0) -lmysqlcppconn -pthread
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -Wall -O0 $(shell pkg-config --cflags gtkmm-3.0) -pthread $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_Util_Globals.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Pages_MainPage.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_shopping-cart.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Util_Database.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_MainWindow.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Pages_IdlePage.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_Pages_Page.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_Util_Globals.cpp$(ObjectSuffix): src/Util/Globals.cpp $(IntermediateDirectory)/src_Util_Globals.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/Util/Globals.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Util_Globals.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Util_Globals.cpp$(DependSuffix): src/Util/Globals.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Util_Globals.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Util_Globals.cpp$(DependSuffix) -MM src/Util/Globals.cpp

$(IntermediateDirectory)/src_Util_Globals.cpp$(PreprocessSuffix): src/Util/Globals.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Util_Globals.cpp$(PreprocessSuffix) src/Util/Globals.cpp

$(IntermediateDirectory)/src_Pages_MainPage.cpp$(ObjectSuffix): src/Pages/MainPage.cpp $(IntermediateDirectory)/src_Pages_MainPage.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/Pages/MainPage.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Pages_MainPage.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Pages_MainPage.cpp$(DependSuffix): src/Pages/MainPage.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Pages_MainPage.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Pages_MainPage.cpp$(DependSuffix) -MM src/Pages/MainPage.cpp

$(IntermediateDirectory)/src_Pages_MainPage.cpp$(PreprocessSuffix): src/Pages/MainPage.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Pages_MainPage.cpp$(PreprocessSuffix) src/Pages/MainPage.cpp

$(IntermediateDirectory)/src_shopping-cart.cpp$(ObjectSuffix): src/shopping-cart.cpp $(IntermediateDirectory)/src_shopping-cart.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/shopping-cart.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_shopping-cart.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_shopping-cart.cpp$(DependSuffix): src/shopping-cart.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_shopping-cart.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_shopping-cart.cpp$(DependSuffix) -MM src/shopping-cart.cpp

$(IntermediateDirectory)/src_shopping-cart.cpp$(PreprocessSuffix): src/shopping-cart.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_shopping-cart.cpp$(PreprocessSuffix) src/shopping-cart.cpp

$(IntermediateDirectory)/src_Util_Database.cpp$(ObjectSuffix): src/Util/Database.cpp $(IntermediateDirectory)/src_Util_Database.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/Util/Database.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Util_Database.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Util_Database.cpp$(DependSuffix): src/Util/Database.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Util_Database.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Util_Database.cpp$(DependSuffix) -MM src/Util/Database.cpp

$(IntermediateDirectory)/src_Util_Database.cpp$(PreprocessSuffix): src/Util/Database.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Util_Database.cpp$(PreprocessSuffix) src/Util/Database.cpp

$(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(ObjectSuffix): src/Pages/PaymentPage.cpp $(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/Pages/PaymentPage.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(DependSuffix): src/Pages/PaymentPage.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(DependSuffix) -MM src/Pages/PaymentPage.cpp

$(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(PreprocessSuffix): src/Pages/PaymentPage.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Pages_PaymentPage.cpp$(PreprocessSuffix) src/Pages/PaymentPage.cpp

$(IntermediateDirectory)/src_MainWindow.cpp$(ObjectSuffix): src/MainWindow.cpp $(IntermediateDirectory)/src_MainWindow.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/MainWindow.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_MainWindow.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_MainWindow.cpp$(DependSuffix): src/MainWindow.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_MainWindow.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_MainWindow.cpp$(DependSuffix) -MM src/MainWindow.cpp

$(IntermediateDirectory)/src_MainWindow.cpp$(PreprocessSuffix): src/MainWindow.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_MainWindow.cpp$(PreprocessSuffix) src/MainWindow.cpp

$(IntermediateDirectory)/src_Pages_IdlePage.cpp$(ObjectSuffix): src/Pages/IdlePage.cpp $(IntermediateDirectory)/src_Pages_IdlePage.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/Pages/IdlePage.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Pages_IdlePage.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Pages_IdlePage.cpp$(DependSuffix): src/Pages/IdlePage.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Pages_IdlePage.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Pages_IdlePage.cpp$(DependSuffix) -MM src/Pages/IdlePage.cpp

$(IntermediateDirectory)/src_Pages_IdlePage.cpp$(PreprocessSuffix): src/Pages/IdlePage.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Pages_IdlePage.cpp$(PreprocessSuffix) src/Pages/IdlePage.cpp

$(IntermediateDirectory)/src_Pages_Page.cpp$(ObjectSuffix): src/Pages/Page.cpp $(IntermediateDirectory)/src_Pages_Page.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/pi/new-eagle/shopping-cart/src/Pages/Page.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_Pages_Page.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_Pages_Page.cpp$(DependSuffix): src/Pages/Page.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_Pages_Page.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_Pages_Page.cpp$(DependSuffix) -MM src/Pages/Page.cpp

$(IntermediateDirectory)/src_Pages_Page.cpp$(PreprocessSuffix): src/Pages/Page.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_Pages_Page.cpp$(PreprocessSuffix) src/Pages/Page.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/



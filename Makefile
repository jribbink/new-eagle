.PHONY: clean All

All:
	@echo "----------Building project:[ shopping-cart - Debug ]----------"
	@cd "shopping-cart" && "$(MAKE)" -f  "shopping-cart.mk"
clean:
	@echo "----------Cleaning project:[ shopping-cart - Debug ]----------"
	@cd "shopping-cart" && "$(MAKE)" -f  "shopping-cart.mk" clean

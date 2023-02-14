#include <iostream>
#include "inventory.h"

void initializeInventory(Inventory& inventory) {
	inventory.addGuitar("V95693", 1499.95, "Fender", "Stratocastor", "electric", "Alder", "Alder");
}

int main()
{
 	Inventory inventory;
 	initializeInventory(inventory);
 	Guitar whatErinLikes("", 0, "Fender", "Stratocastor", "electric", "Alder", "Alder");
 	Guitar guitar = inventory.search(whatErinLikes);
	if (guitar.getSerialNumber() != "NA") {
		std::cout << "Erin, you might like this " << guitar.getBuilder() << " " << guitar.getModel() << " " << std::endl; 
		std::cout << guitar.getType() << " guitar:\n    " 
			 << guitar.getBackWood() << " back ans sides,\n    "
			 << guitar.getTopWood() << " top.\n You can have it for only $"
			 << guitar.getPrice() << std::endl;
	} else {
		std::cout << "Sorry, Erin, we have nothing for you." << std::endl; 
	}
	return 0;
} 

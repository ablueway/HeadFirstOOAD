#include <iostream>
#include "inventory.h"
#include "enumClass.h"
void initializeInventory(Inventory& inventory) {
	inventory.addGuitar("V95693", 1499.95, BUILDER::FENDER, "Stratocastor", TYPE::ELECTRIC, WOOD::ALDER, WOOD::ALDER);
	inventory.addGuitar("V9512", 1549.95, BUILDER::FENDER, "Stratocastor", TYPE::ELECTRIC, WOOD::ALDER, WOOD::ALDER);
	inventory.addGuitar("N3210", 1321.95, BUILDER::GIBSON, "Stratocastor", TYPE::ACOUSTIC, WOOD::INDIAN_ROSEWOOD, WOOD::ALDER);
}

int main()
{
 	Inventory inventory;
 	initializeInventory(inventory);
 	Guitar whatErinLikes("", 0, BUILDER::FENDER, "Stratocastor", TYPE::ELECTRIC, WOOD::ALDER, WOOD::ALDER);
 	std::vector<Guitar> guitars = inventory.search(whatErinLikes);
	if (!guitars.empty()) {
		for (auto& guitar : guitars) {
			std::cout << "Erin, you might like this " << toString(guitar.getBuilder()) << " " << guitar.getModel() << " " << std::endl; 
			std::cout << toString(guitar.getType()) << " guitar:\n    " 
				<< toString(guitar.getBackWood()) << " back ans sides,\n    "
				<< toString(guitar.getTopWood()) << " top.\n You can have it for only $"
				<< guitar.getPrice() << std::endl;
		}
	} else {
		std::cout << "Sorry, Erin, we have nothing for you." << std::endl; 
	}
	return 0;
} 
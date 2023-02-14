#include "inventory.h"

Inventory::Inventory() = default; 
Inventory::~Inventory() = default;
 	
void Inventory::addGuitar(std::string sn, double price, std::string builder, std::string model, std::string type, std::string backWood, std::string topWood) {
	Guitar guitar(sn, price, builder, model, type, backWood, topWood);
	guitars.push_back(guitar);
 }
	 
Guitar Inventory::getGuitar(std::string sn) {
	for (auto it = guitars.begin(); it != guitars.end(); ++it) {
		if (it->getSerialNumber() == sn) {
			return *it;
		}
	}
	return {};
 }

Guitar Inventory::search(Guitar& guitarWantToBuy) {
	if (guitars.size() == 0) { return {}; }
	 
	for (auto& g :guitars) {
		if (g.getBuilder() != guitarWantToBuy.getBuilder()) { continue; }
		if (g.getModel() != guitarWantToBuy.getModel()) { continue; }
		if (g.getType() != guitarWantToBuy.getType()) { continue; }
		if (g.getBackWood() != guitarWantToBuy.getBackWood()) { continue; }
		if (g.getTopWood() != guitarWantToBuy.getTopWood()) { continue; }
		//return g;	
		return g;					
	}		
	return {};
}
	  	

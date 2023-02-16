#include "inventory.h"
#include <algorithm>
Inventory::Inventory() = default; 
Inventory::~Inventory() = default;
 	
void Inventory::addGuitar(std::string sn, double price, BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood) {
	Guitar guitar(sn, price, builder, model, type, backWood, topWood);
	guitars.push_back(guitar);
 }
	 
Guitar Inventory::getGuitar(const std::string& sn) {
	for (auto it = guitars.begin(); it != guitars.end(); ++it) {
		if (it->getSerialNumber() == sn) {
			return *it;
		}
	}
	return {};
 }

std::vector<Guitar> Inventory::search(Guitar& guitarWantToBuy) {
	if (guitars.size() == 0) { return {}; }
	std::vector<Guitar> ans; 
	for (auto& g : guitars) {
		if (g.getBuilder() != guitarWantToBuy.getBuilder()) { continue; }
		std::string s1 = g.getModel();
		std::string s2 = guitarWantToBuy.getModel();
		std::for_each(s1.begin(), s1.end(), [](char & c) { c = ::tolower(c); });
		std::for_each(s2.begin(), s2.end(), [](char & c) { c = ::tolower(c); });
		if ( s1 != s2) { continue; }
		if (g.getType() != guitarWantToBuy.getType()) { continue; }
		if (g.getBackWood() != guitarWantToBuy.getBackWood()) { continue; }
		if (g.getTopWood() != guitarWantToBuy.getTopWood()) { continue; }	
		ans.push_back(g);					
	}	
	return ans;
}
	  	

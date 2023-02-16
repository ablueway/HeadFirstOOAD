#pragma once
#include <vector>
#include "guitar.h" 
class Inventory {
 public:
 	Inventory(); 
 	~Inventory();
 	
 	void addGuitar(std::string sn, double price, BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood);
 	Guitar getGuitar(const std::string& sn);

	std::vector<Guitar> search(Guitar& guitarWantToBuy);
	  	
 private:
	std::vector<Guitar> guitars;
};

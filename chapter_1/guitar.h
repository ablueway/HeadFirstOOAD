#pragma once
#include <string>
#include "enumClass.h"
class Guitar { 
 private:
	std::string serialNumber;
	double price = 0;
	BUILDER builder;
	std::string model;
	TYPE type;
	WOOD backWood;
	WOOD topWood;
	
 public:
 	Guitar();
 	Guitar(std::string sn, double price, BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood);
 	~Guitar();
 	
 	std::string getSerialNumber(void);
	double getPrice(void);
	void setPrice(float);

	BUILDER getBuilder(void);
	std::string getModel(void);
	TYPE getType(void);
	WOOD getBackWood(void);
	WOOD getTopWood(void);
};

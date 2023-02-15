#include "guitar.h"
Guitar::Guitar() {
	serialNumber = "NA";
}
Guitar::Guitar(std::string sn, double price, BUILDER builder, std::string model, TYPE type, WOOD backWood, WOOD topWood) {
	this->serialNumber = sn;
	this->price = price;
	this->builder = builder;
	this->model = model;
	this->type = type;
	this->backWood = backWood;
	this->topWood = topWood;
}

Guitar::~Guitar() = default;

std::string Guitar::getSerialNumber(void) {
	return serialNumber;
}

double Guitar::getPrice(void) {
	return price;
}

void Guitar::setPrice(float p) {
	price = p;
}

BUILDER Guitar::getBuilder(void) {
	return builder;
}

std::string Guitar::getModel(void) {
	return model;
}

TYPE Guitar::getType(void) {
	return type;
}

WOOD Guitar::getBackWood(void) {
	return backWood;
}

WOOD Guitar::getTopWood(void) {
	return topWood;
}

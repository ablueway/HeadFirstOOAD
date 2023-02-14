#include "guitar.h"
Guitar::Guitar() {
	serialNumber = "NA";
}
Guitar::Guitar(std::string sn, double price, std::string builder, std::string model, std::string type, std::string backWood, std::string topWood) {
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

std::string Guitar::getBuilder(void) {
	return builder;
}

std::string Guitar::getModel(void) {
	return model;
}

std::string Guitar::getType(void) {
	return type;
}

std::string Guitar::getBackWood(void) {
	return backWood;
}

std::string Guitar::getTopWood(void) {
	return topWood;
}

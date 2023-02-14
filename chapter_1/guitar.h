#include <string>

class Guitar { 
 private:
	std::string serialNumber;
	double price = 0;
	std::string builder;
	std::string model;
	std::string type;
	std::string backWood;
	std::string  topWood;
	
 public:
 	Guitar();
 	Guitar(std::string sn, double price, std::string builder, std::string model, std::string type, std::string backWood, std::string topWood);
 	~Guitar();
 	
 	std::string getSerialNumber(void);
	double getPrice(void);
	void setPrice(float);

	std::string getBuilder(void);
	std::string getModel(void);
	std::string getType(void);
	std::string getBackWood(void);
	std::string getTopWood(void);
};

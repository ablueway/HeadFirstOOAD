#include <vector>
#include "guitar.h" 
class Inventory {
 public:
 	Inventory(); 
 	~Inventory();
 	
 	void addGuitar(std::string sn, double price, std::string builder, std::string model, std::string type, std::string backWood, std::string topWood);
 	Guitar getGuitar(std::string sn);

	Guitar search(Guitar& guitarWantToBuy);
	  	
 private:
	std::vector<Guitar> guitars;
};

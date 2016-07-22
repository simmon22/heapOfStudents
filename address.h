//address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using namespace std;


class Address
{
	private:
		string line1;
		string line2;
		string city;
		string state;
		int zip;
	
	public:
    
        Address();
        Address(string line1, string line2, string city, string state, int zip);
		
		//getters
		
		string getLine1();
		string getLine2();
		string getCity();
		string getState();
		int getZip();
		
		//setters
		
		void setLine1(string line1);
		void setLine2(string line2);
		void setCity(string city);
		void setState(string state);
		void setZip(int zip);
	
};

#endif //ADDRESS_H
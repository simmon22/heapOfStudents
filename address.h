//address.h

#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
	private:
		string line1;
		string line2;
		string city;
		string state;
		int zip;
	
	public:
		
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
//date.h

#ifndef DATE_H
#define DATE_H

class Date
{
	private:
		int month;
		int day;
		int year;
	
	public:
		
		//constructors
		
		Date();
        Date(int month, int day, int year);
		
		//getters
		
		int getMonth();
		int getDay();
		int getYear();
		
		//setters
		
		void setMonth(int month);
		void setDay(int day);
		void setYear(int year);
	
};

#endif //DATE_H
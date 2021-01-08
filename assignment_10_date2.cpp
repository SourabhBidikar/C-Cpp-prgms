#include <iostream>

using namespace std;


class MyDate{
	int DD;
	int MM;
	int YYYY;
	
public:

	MyDate(){
		//Setting default date
		DD=1;
		MM=1;
		YYYY=1900;
	}
	MyDate(int DD, int MM, int YYYY){
		//Check for year constraint
		//Check for date constraint
		//Check for year constraint
	}

	int getDay(){return DD;}

	int getMonth(){return MM;}

	int getYear(){return YYYY;}

	void setDay(int day){
		//Check and set for day
		if(day<0 && day>31){
			cout << "\nThe day you are setting is invalid";
		}else{
			bool check = isValidDate(day,MM,YYYY);
			DD=day;
		}
	}
	void setMonth(int month){
		//Check and set for month
		if(month<0 && month >12){
			cout <<"\nInvalid month. Month has to be between 1 and 12.";
		}else{
			//Check for month
			bool check = isValidDate(DD,month,YYYY);
			MM=month;
		}
	}

	bool isValidDate(int date, int month, int year){

		return true;
	}
	
	void setYear(int year){
		//Check and set for year
		if(YYYY<1900 && YYYY > 3000)
			cout <<"\nInvalid year. Year has to be between 1900 and 3000.";
		else{
			bool check = isValidDate(MM,DD,year);
			YYYY=year;
		}
	}

	//Displays the date in DD/MM/YYYY format
	void displayDate(){
		//Print the date
		cout << "\nThe date is : " << DD << "/" << MM << "/" << YYYY <<"\n";
	}
	
	MyDate& operator=(const MyDate &date){
		DD=date.DD;
		MM=date.MM;
		YYYY=date.YYYY;
		return *this;
	}
	bool operator==(const MyDate &date){
		if(YYYY==date.YYYY && MM==date.MM && DD==date.DD)
			return true;
		else 
			return false;
	}
	MyDate& operator+(int days){
		DD=DD + days;
		return *this;
	}
	MyDate operator ++(int n){
		MyDate d = *this;
		DD++;
		return d;
	}
	MyDate operator --(int n){
		MyDate d = *this;
		DD=DD-1;
		return d;
	}
	MyDate& operator ++(){
		DD=DD+1;
		return *this;
	}
	MyDate& operator --(){
		DD=DD-1;
		return *this;
	}
	int operator[](char ch){
		if(ch=='D'){return DD;}
		if(ch=='M'){return MM;}
		if(ch=='Y'){return YYYY;}
		return 0;
	}
};

int main(){
	MyDate date, newdate, firstdate;
	firstdate.setDay(10);
	date.setDay(20);
	date.setMonth(2);
	date.setYear(2020);
	date.displayDate();
	bool check;
	check=(firstdate==date);
	cout<< endl << "operator == " << check;
	cout << endl << "Before copy";
	newdate.displayDate();
	firstdate.displayDate();
	firstdate=newdate=date;
	newdate++;
	cout<<endl << "After operator = ";
	newdate.displayDate();
	firstdate.displayDate();
	check=(firstdate==date);
	cout<<endl << "Operator == " <<check;

	cout<< endl <<  "Operator ['D'] is " << date['D'];
	cout<< endl <<  "Operator ['M'] is " << date['M'];
	cout << endl << "Before + operator";
	date.displayDate();
	cout<< endl <<  "Operator ++ is ";
	date++;
	date.displayDate();
	cout<< endl <<  "Operator -- is ";
	date--;
	date.displayDate();
	date = date + 5;
	cout<< endl <<  "Operator + is ";
	date.displayDate();
	
}


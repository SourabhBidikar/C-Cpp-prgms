#include<iostream>
using namespace std;

class date
{
	int day;
	int month;
	int year;
public:
	void get_date()
	{
		cout<<"Enter the day:";
		cin>>day;
		cout<<"Enter the month:";
		cin>>month;
		cout<<"Enter the year:";
		cin>>year;
		if(day<1||day>31||month<1||month>12||year<0)
		{	
			cout<<"Enter the date correctly again:"<<endl;
			get_date();
		}
	return;	
	}

	const void write()
	{
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}

	date  operator+(int &b)
	{ 
		date temp;
		temp.day=day;
		temp.month=month;
		temp.year=year;
		
		temp.day=temp.day+b;
		if(temp.day>31)
		  {
		  temp.day=temp.day-31;
		  temp.month++;
		  if(temp.month>12)
		  
		  {
			  temp.month=temp.month-12;
			  temp.year++;

	      }
	      
			return temp;
    }
	
	date  operator-(int &b)
	{ 
		date temp;
		temp.day=day;
		temp.month=month;
		temp.year=year;
		
		temp.day=temp.day-b;
		if(temp.day<=0)
		  {
		  temp.day=temp.day+31;
		  temp.month--;
	      }
	      
			return temp;
    }
    
	date  operator++()
	{ 
		date temp;
		temp.day=day;
		temp.month=month;
		temp.year=year;
		
		temp.day=++temp.day;
		if(temp.day>31)
		  {
		  temp.day=temp.day-31;
		  temp.month++;
	      }
	      
	
			return temp;
    }
    date  operator--()
	{ 
		date temp;
		temp.day=day;
		temp.month=month;
		temp.year=year;
		
		temp.day=--temp.day;
		if(temp.day==0)
		  {
		  temp.day=temp_day+31;
		  temp.month--
		  ;
	      }
	      
	
			return temp;
    }
    
    bool  operator==(date &b)
	{ 
		date temp;
		temp.day=day;
		temp.month=month;
		temp.year=year;
		
		if(temp.day&&b.day&&temp.month&&temp.year)
		  return true;
		return false;
	      
	
			
    }
    int	operator[](char &b)
    { 
		if(b=='d')
		{
			return day;
		}
    	else if(b=='m')
    	{
    		return month;
		}
		else if(b=='y')
		{
			return year;
			
		}
		else{
			cout<<"invalid choice";
		}
	}
};

int main()
{
	date d1, d2,d3;
	d1.get_date();
	d1.write();
	
	int ch;

	cout<<"choose the operation: \n1.Add\n2.Subtract days\n3.Increment a day \n4.decrement a day \n5.check for equality \n6.find given day, month or year"<<endl;
	cin>>ch;
	if(ch==1)
	{
		cout<<"enter the days to add:"<<endl;
	int days;
	cin>>days;
	d2=d1+days;
	d2.write();	
	}
    if(ch==2)
    {
     	cout<<"enter the days to subtract:"<<endl;
	     int days;
    	cin>>days;	
		d2=d1-days;
		d2.write();
	}
	if(ch==3)
	{
		d2=++d1;
		d2.write();
	}
	
	if(ch==4)
	{
		d2=--d1;
		d2.write();
	}
	
	if(ch==5)
	{
		cout<<"Enter date to check if equal:"<<endl;
		d3.get_date();
		bool x= (d1==d3);
		if(x==true)
		  {
		  cout<<"date is equal"<<endl;
			}	
		 else{
		 cout<<"date not equal";}
	}
	if(ch==6)
	{
		int day,month,year;
		char c;
		cout<<"Enter 'd' for day, 'm' for month or 'y' for year:"<<endl;
		cin>>c;
		if(c=='d')
		{
		day=d1[c];
		cout<<day;
		}
	    else if(c=='m')
	    {
	    month=d1[c];
	    cout<<month;
		}
	 	else if(c=='y')
	 	{
	 	year=d1[c];
	 	cout<<year;
		 }
	}
	return 0;

}
	






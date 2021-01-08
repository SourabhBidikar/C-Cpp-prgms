#include<iostream>
using namespace std;


class time
{
	int ss, mm , hh;
   
    public:
     time(): dd(0), mm(0), yyy(0)
	 {}
     date(int ss1, int mm1, int hh1)
	 {
		 ss = ss1;
		 mm = mm1;
		 hh = hh1;

		 }


    time operator + (time s1){
        time s;

		s.ss = ss + s1.ss;
		if(s.ss > 60){
			mm++;
		s.ss=s.ss-60;
			}
		s.mm = mm + s1.mm;
		if(s.mm>60){
               hh++;
	    s.mm=s.mm-60;
		 if(hh>24)
			 {
				 s.hh=hh-24;
		}
       }

		return s;
	}

    date operator -- (){

		dd--;
		if(dd==0)
		{
                mm--;
	    	if(mm==0){
	        	  yyy--;
	            	mm = 12;
			}
	     dd = 30;
		}

	}
    date operator ++ (){
      
		   dd++ ;
		if(dd>30)
		{
          mm++;
	    	if(mm>12){
	        	yyy++;
	            	mm = mm-12;
			}
	     dd = dd-30;
      
	}
	}

	date operator = (date d1){

        dd = d1.dd;
		mm = d1.mm;
		yyy = d1.yyy;

	}
    bool operator == (date d1){
        date d;

		if((dd == d1.dd)&&(mm == d1.mm)&&(yyy == d1.yyy)){return true;}

	}
/*void Read(int &d, int &m, int &y){
	cout<<"Enter the date";
	cin>>d>>m>>y;
		
	}

*/
	void print(){
		cout<<endl;
		cout<<dd<<"/"<<mm<<"/"<<yyy;
		cout<<endl;
		}

};	
	
	
class date
{
	int dd, mm , yyy;
   
    public:
     date(): dd(0), mm(0), yyy(0)
	 {}
     date(int dd1, int mm1, int yyy1)
	 {
		 dd = dd1;
		 mm = mm1;
		 yyy = yyy1;

		 }


    date operator + (date d1){
        date d;

		d.dd = dd + d1.dd;
		if(d.dd > 30){
			mm++;
		d.dd=d.dd-30;
			}
		d.mm = mm + d1.mm;
		if(d.mm>12){
               yyy++;
	    d.mm=d.mm-12;
		}
	   d.yyy = yyy + d1.yyy;
		return d;
	}

    date operator -- (){

		dd--;
		if(dd==0)
		{
                mm--;
	    	if(mm==0){
	        	  yyy--;
	            	mm = 12;
			}
	     dd = 30;
		}

	}
    date operator ++ (){
      
		   dd++ ;
		if(dd>30)
		{
          mm++;
	    	if(mm>12){
	        	yyy++;
	            	mm = mm-12;
			}
	     dd = dd-30;
      
	}
	}

	date operator = (date d1){

        dd = d1.dd;
		mm = d1.mm;
		yyy = d1.yyy;

	}
    bool operator == (date d1){
        date d;

		if((dd == d1.dd)&&(mm == d1.mm)&&(yyy == d1.yyy)){return true;}

	}
/*void Read(int &d, int &m, int &y){
	cout<<"Enter the date";
	cin>>d>>m>>y;
		
	}

*/
	void print(){
		cout<<endl;
		cout<<dd<<"/"<<mm<<"/"<<yyy;
		cout<<endl;
		}

	
	
	
	};

int main(){
     
	 date d1(02,5,1997),d2(20,07,2010),d3;
   //int d,m,y,d11;
//   d11= Read(d,m,y);	
//   date d1(d1);
 //  Read(d,m,y);
  // date d2(d,m,y),d3;

   d3 = d1 + d2;

   d3.print();


   --d3;
   d3.print();

   ++d3;
   d3.print();

   d1 = d2;
   d1.print();

return 0;
}

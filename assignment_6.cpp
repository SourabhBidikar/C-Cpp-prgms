#include<iostream>
using namespace std;


class complex
{
	float real,img;
	public:
    complex();
	complex(float,float);
	void Read();
	void write();
	complex Add(complex &);
	complex Sub(complex &);
	bool compare(complex &);
};


complex::complex()
{
		cout<<"in default constructor"<<endl;
    real=0;
	img=0;
}

complex::complex(float r, float i) 
{
   real=r;
   img=i;
   cout<<"in parameterised constructor";

}

void complex::Read()
{
   cout<<"Enter the values:"<<endl;
   cin>>real>>img;
}
void complex:: write()
{
      cout<<"the complex number is: "<<real<<"+"<<img<<"i"<<endl;
}
	
complex complex::Add(complex &c)
{
	complex d;
     d.real= this->real+c.real;
	 d.img= this->img+c.img;
	return d;
}

complex complex::Sub(complex &c)
{
	complex d;
     d.real=this->real-c.real;
	d.img=this->img-c.img;
	return d;
}

bool complex::compare(complex &c)
{
	if(this->real==c.real&&this->img==c.img)
	{
		return true;
	}
	else
	{
		return false;
	}
}


	


int main()
{
   complex c1;

   c1.Read();
  complex c2(10,20);
   
  complex c3= c1.Add(c2);
  c3.write();

  complex c4= c1.Sub(c2);
	c4.write();	
  bool comp= c1.compare(c2);
  if(comp==true) cout<< "equal";
  else cout<<"not equal";

}





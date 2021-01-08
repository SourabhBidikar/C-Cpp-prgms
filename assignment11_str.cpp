#include<cstring>
#include<iostream>
using namespace std;


class String
{
	int len;
	char *str;
	public:
	//Construtor
	String()
	{
		len=0;
		str=new char;
		str[0]='\0';
	
	}
	
	//Parameterised Constructor
	String(const char *s)
	{
		len=strlen(s);
		str= new char[len+1];
		strcpy(str,s);
	}

	~String()
	{
		delete[] str;
	}

	//Copy constructor below
	String(const String &s)
	{
		len=s.len;
		str= new char[len+1];
		strcpy(str, s.str);
	}

	friend ostream & operator << (ostream &out,const String &c) 
	{ 
   		out << c.str; 
   		return out;
	}
	friend istream & operator >> (istream &in,  String &c)
	{
		cout<<"Enter String";
		cin>>c.str;
		return in;
	}
	
	String operator+(const String &s)
	{
		String temp;
		temp.len=len+s.len;
		temp.str=new char[temp.len+1];
		strcpy(temp.str,str);

		strcat(temp.str,s.str);
		return temp;
	}
	
	String operator=(const String &s)
	{
		len=s.len;
		str= new char[len+1];
		strcpy(str, s.str);
		return str;
	}
	
   int  operator==(const String &s)
	{
		if(strcmp(str,s.str)==0)
		     return 0;
		 else
			 return 1;
	}
	
	char operator[](int i)
	{
		return str[i];
	}

};

		
int main()
{
	String s1("cdac");
	cout<<"String 1:"<<endl;
	cout<<s1<<endl;
	String s2("Acts");
	cout<<"String 2:"<<endl;
	cout<<s2<<endl;
	String s3=s1+s2;
	cout<<"+operator demo String 3:"<<endl;
	cout<<s3<<endl;
	String s4(s3);
	
	cout<<"copy constructor demo String 4:"<<endl;
	cout<<s4<<endl;
    String s5=s4;
	cout<<"operator =  demo String 5:"<<endl;
	cout<<s5<<endl;

	int  result= (s1==s2);
	if(result==0) cout<<"s1 and s2 are equal"<<endl;
	else cout<<"s1 and s2 are not equal"<<endl;
    String s6;
	cin>>s6;
	cout<<"you entered String 6:"<<s6<<endl;
	int  result2= (s5==s6);
	if(result2==0){ 
		cout<<"s5 and s6 are equal"<<endl;}
	else{
		cout<<"s5 and s6 are not equal"<<endl;}
		
		cout<<"Enter position to find char in String 4:"<<endl;
		int i;
		cin>>i;
		cout<<endl<<"The char at:"<<i<<"in String 4 is: "<<s4[i-1]<<endl;
	


}


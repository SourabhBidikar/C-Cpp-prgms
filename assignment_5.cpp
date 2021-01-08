#include<iostream>
using namespace std;
const int ARRAY_SIZE=100;

int read_array_size()
{
	int n;
	cout<<"enter the number of elements you want to enter, less than "<<ARRAY_SIZE<<endl;
	cin>>n;
	if(n>0&&n<=100)
	{
		return n;
	}
	else
	{
		cout<<"Invalid input"<<endl;
		read_array_size();
	}
}


void read_array_elements(int &n, int (&arr)[ARRAY_SIZE])
{

	cout<<"Enter  "<<n<<"  elements";
    for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}	
	
}
	
int menu()
{
	int ch;
	cout<<"Menu:"<<endl<<"1.Find a number"<<endl<<"2.exit"<<endl;
	cin>>ch;	
	return ch;
}

bool find_number(int arr[])
{
   int num;
   cout<<"Enter the number"<<endl;
   cin>>num;
   for(int i=0;i<ARRAY_SIZE;i++)
   {
	   if(arr[i]==num)
		{
			return true;
		}
   }
   return false;
 }

int main()
{
	int arr[ARRAY_SIZE];
	int n=read_array_size();
    read_array_elements(n,arr);
	do
	{
		int ch = menu();
		if(ch==1)
		{
		 bool val=find_number(arr);
		 if(val==true) 
		 {
		 cout<<"number found"<<endl;
	     }
		 else
		 {
			 cout<<"number not found"<<endl;

		 }
		}
		else if(ch==2)
		{
			exit(0);
		}	

	}while(1);
return 0;
}

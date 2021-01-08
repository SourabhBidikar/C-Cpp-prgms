#include<iostream>
using namespace std;

void strwrite(char *s)

{
	  for(int i =0 ; i < (sizeof(s)/sizeof(s[0])) ; i ++ ){
      cout << s[i] ;
	  }		
}


char *strcopy(char *dest, char *src)
{
	while(*src!='\0')
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}

void *strcat(char *src1, char *src2)
{
	while(*src1!='\0')
	{
		*src1++;
	}
		while(*src2!='\0')
		{	
			*src1=*src2;
			src1++;
			src2++;
		}
		*src1='\0';
}
int StrCmp(const char *str1, const char *str2)
{
	while(*str1==*str2)
	{
		if(*str1=='\0'||*str2=='\0')	break;
			str1++;
			str2++;
		}
	
	if(*str1=='\0'&&*str2=='\0')	return 0;
	else return 1;
}

int main()
{
	char str1[100], str2[100], src[100], dest[100], src1[100], src2[100];
	cout<<"Enter the source string:"<<endl;
    cin>>src;
	strcopy(dest, src);
	cout<<"Source String is:"<<endl;
	strwrite(src);
	cout<<endl;
	cout<<endl<<"destination String is:"<<endl;
	strwrite(dest);
	cout<<endl;
	cout<<"Enter the strings to compare:"<<endl;
	cout<<"string 1:  ";
	cin>>str1;
	cout<<"string 2:  ";
	cin>>str2;



	int x= StrCmp(str1,str2);
	if(x==0) cout<<"strings are equal"<<endl;
	if(x==1) cout<<"strings are not equal"<<endl;
	
	cout<<"enter the strings to concatenate:"<<endl;
	cout<<"Enter the source string:"<<endl;
    cin>>src1;
	
	cout<<"Enter the string to concat:"<<endl;
    cin>>src2;
	strcat(src1,src2);
	strwrite(src1);
}


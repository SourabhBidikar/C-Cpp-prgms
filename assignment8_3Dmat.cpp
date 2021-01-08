#include<iostream>
using namespace std;

class matrix
{
	int n,m,num;
	int mat[50][100][100];

public:
	
	matrix()
	{
	for(int k=0; k<num; k++)
	{
	for(int i=0; i<n;++i)
	{
		for(int j=0; j<m;++j)
	    {
			mat[k][i][j]=0;
		}
	}
	}
	}

	void  matrix_read()
	{
	for(int k=0; k<num; k++)
	{
		cout<<"enter the elements for "<<k+1<<"matrix:"<<endl;
	for(int i=0; i<n;++i)
	{
		for(int j=0; j<m;++j)
		{
			cout<<"enter element:"<<i<<j<<":";
			cin>>mat[k][i][j];
			
		}
	}
	}
	}

	int get_mn()
	{
		int x,y;

       cin>>x>>y;
	    m=x;
	    n=y;
	} 

	int get_no()
	{
	    num;
		cin>>num;
	}
	
	
	void matrix_write()
	{
	for(int k=0; k<num; k++)
	{
		for(int i=0; i<n; ++i)
      {
	    for(int j=0; j<m; ++j)
	    {
		 cout<<" "<<mat[k][i][j];
        }
	    cout<<endl;
      }
	  cout<<endl;
     }
	 }

    
	
	matrix matrix_add()
	{
	 int  temp[n][m];
     
	
	for(int i=0; i<n;++i)
	{
		for(int j=0; j<m;++j)
	    {
			temp[i][j]=0;
		}
	}
	
	for(int k=0; k<num; k++)
	{
	for(int i=0; i<n;++i)
	{
		for(int j=0; j<m;++j)
	    {
			temp[i][j]= temp[i][j]+mat[k][i][j];
		}
	}
	}

	
	for(int i=0; i<n;++i)
	{
		for(int j=0; j<m;++j)
	    {
		  
		 cout<<" "<<temp[i][j];
		}
		cout<<endl;
	}
	}
	
	~matrix(){}

};	   




  		





int main()
{
	matrix m1;
	cout<<"enter the number of matrices:"<<endl;
	m1.get_no();
	cout<<"enter the number of rows and columns:"<<endl;
	m1.get_mn();
	cout<<"Enter the matrix elements"<<endl;
	m1.matrix_read();
	
	m1.matrix_write();
	cout<< " matrix addition gives:"<<endl;
	m1.matrix_add();

    return 0;
}


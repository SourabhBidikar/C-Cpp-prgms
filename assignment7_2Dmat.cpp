#include<iostream>
using namespace std;

class matrix
{
	int n,m;
	int mat[100][100];
public:
	void  matrix_read()
	{
	for(int i=0; i<n;++i)
	{
		for(int j=0; j<m;++j)
		{
			cout<<"enter element:"<<i<<j<<":";
			cin>>mat[i][j];
			
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

	void matrix_write()
	{
     for(int i=0; i<n; ++i)
      {
	    for(int j=0; j<m; ++j)
	    {
		 cout<<" "<<mat[i][j];
        }
	    cout<<"\n";
      }
     }

    matrix matrix_add(matrix &temp)
	{
		matrix m_add;
     for(int i=0; i<n; ++i)
      {
	    for(int j=0; j<m; ++j)
	    {
		 m_add.mat[i][j]=this->mat[i][j]+temp.mat[i][j];
        }
	  
	  }

	  cout<<"matrix addition gives:"<<endl;
      m_add.m=temp.m;
	  m_add.n=temp.n;
	  m_add.matrix_write();


	}


};	   




  		





int main()
{
	matrix m1,m2;
	cout<<"enter no of rows and cloumns for m1:"<<endl;
	m1.get_mn();
	cout<<"enter no of rows and cloumns for m2:"<<endl;

	m2.get_mn();
	cout<<"enter values for matrix 1:"<<endl;
	m1.matrix_read();
	cout<<"Enter values for matrix 2:"<<endl;
	m2.matrix_read();
	cout<<"Matrix 1:"<<endl;
	m1.matrix_write();
	cout<<"Matrix 2:"<<endl;
	m2.matrix_write();
	m1.matrix_add(m2);

}

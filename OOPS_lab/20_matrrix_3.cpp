#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	int **A,**B,**C;
	cout<<"Enter the number of rows in matrix 1:";
	cin>>r1;
	cout<<"Enter the number of columns in matrix 1:";
	cin>>c1;
	A=new int*[r1];
	for(int i=0;i<r1;i++)
		A[i]=new int[c1];
	cout<< "Enter the contents of matrix 1: \n";
	for (int i = 0; i < r1; ++i)
	{
		for(int j=0;j<c1;j++)
			cin>>A[i][j];
	}
	cout<<"Enter the number of rows in matrix 2:";
	cin>>r2;
	cout<<"Enter the number of columns in matrix 2:";
	cin>>c2;
	B=new int*[r2];
	for(int i=0;i<r2;i++)
		B[i]=new int[c2];
	
	cout<< "Enter the contents of matrix 2: \n";
		for (int i = 0; i < r2; ++i)
		{
			for(int j=0;j<c2;j++)
				cin>>B[i][j];
		}
	//matrix c for result having row r1 and column c2
		C=new int*[r1];
		for(int i=0;i<c2;i++)
			C[i]=new int[c2];
		for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < r2; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
    cout<<"Result : \n ";
	for (int i = 0; i < r1; ++i)
	{
		for(int j=0;j<c2;j++)
			cout<<C[i][j]<<"\t";
		cout<<endl;
	}
	for(int i = 0; i < r1; ++i) {
        delete[] A[i];   
    }
    delete[] A;
    for(int i = 0; i < r2; ++i) {
        delete[] B[i];   
    }
    delete[] B;
    for(int i = 0; i < r1; ++i) {
        delete[] C[i];   
    }
    delete[] C;
}
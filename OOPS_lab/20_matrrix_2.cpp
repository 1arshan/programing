
#include<iostream>
using namespace std;
class matrix
{
private:
    int **a;
    int m,n;
public:
    matrix(int m,int n)
    {
        this->m=m;
        this->n=n;
        a=new int*[m];
        for(int i=0;i<m;i++)
        {
            a[i]=new int[n];
        }

    }

    void get_data()
    {
         cout<<"Enter the matrix";
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void multiply(matrix);
};

void matrix::multiply(matrix m2)
{
    int sum=0;
    if(this->n!=m2.m)
    {
        cout<<"Matrices cannot be multiplied";
    }
    else
    {
        matrix ans(this->m,m2.n);
        for(int i=0;i<this->m;i++)
        {
            for(int j=0;j<m2.n;j++)
            {
                sum=0;
                for(int k=0;k<this->n;k++)
                {
                    sum+=this->a[i][k]*m2.a[k][j];
                }
                ans.a[i][j]=sum;
            }
        }

        cout<<"The multiplied matrix is"<<endl;
        for(int i=0;i<ans.m;i++)
        {

            for(int j=0;j<ans.n;j++)
            {
                cout<<ans.a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int a,b,c,d;
    cout<<"NAME : Arshan Ahmad"<<endl;
    cout<<"ROLL NO: 18BCS075"<<endl;
    cout<<"Enter rows in first matrix";
    cin>>a;
    cout<<"Enter columns in first matrix";
    cin>>b;
    cout<<"Enter rows in second matrix";
    cin>>c;
    cout<<"Enter columns in second matrix";
    cin>>d;
    matrix m1(a,b);
    matrix m2(c,d);
    m1.get_data();
    m2.get_data();
    m1.multiply(m2);
    return 0;
}

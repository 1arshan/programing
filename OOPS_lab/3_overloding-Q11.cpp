// Overload ++ when used as prefix

#include <iostream>
using namespace std;



class Add {
    private:
    int m1[10][10];
    int m2[10][10], s[10][10];
    int r,c;
    public:

    void matrix_initialize(int row, int col)
    {   r =row;
        c =col;
        cout << "Enter the elements of  first 1st matrix: ";
      for (int i = 0;i<row;i++ ) {
        for (int j = 0;j < col;j++ ) {
          cin>>m1[i][j];
        }
      }
      cout << "Enter the elements of  first 1st matrix: ";
      for (int i = 0;i<row;i++ ) {
        for (int j = 0;j<col;j++ ) {
          cin>>m2[i][j];
        }
    }
    }
//matrix addiotn
    void operator + (){
        for (int i = 0;i<r;i++ ) {
        for (int j = 0;j<c;j++ ) {
          s[i][j]=m1[i][j]+m2[i][j];
          cout<<s[i][j]<<" ";
        }
        cout<<endl;
      }
    }

//matrix substration
    void operator - (){
        for (int i = 0;i<r;i++ ) {
        for (int j = 0;j<c;j++ ) {
          s[i][j]=m1[i][j]-m2[i][j];
          cout<<s[i][j]<<" ";
        }
        cout<<endl;
      }
    }

};


int main(){
  cout<<"ARSHAN AHMAD 18BCS075"<<endl;
   int row, col;
   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;
   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;
   Add obj;
   obj.matrix_initialize(row, col);
   cout<<"MATRIX ADDITION"<<endl;
   +obj;
   cout<<"MATRIX SUBSTRACTION"<<endl;
   -obj;
   return 0;
}
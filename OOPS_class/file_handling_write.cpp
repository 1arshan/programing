#include<iostream>
#include<fstream>
using namespace std;

class temp
{
    private:
    int a;
    int b;
    public:
    temp()
    {a =10;
    b =20;}
};

int main()
{
    char arr[100];
    temp t;
    cout<<"enter the name of the string"<<endl;
    cin.getline(arr,100);

    ofstream myfile("xyz.txt",ios::app);
    myfile<<arr;
    //myfile<<t;
    myfile.close();
    cout<<"File write operation perform successfully"<<endl<<endl;

    cout<<"Reading from file"<<endl;
    ifstream obj ("xyz.txt");
    obj.getline(arr,100);
    cout<<"array content: "<<arr<<endl;
    obj.close();
    return 0;
}

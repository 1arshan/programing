#include<bits/stdc++.h>
using namespace std;

class Flight{
    private:
    int flight_number;
    string destination;
    float distance;
    int calFuel()
    {
        if(distance<=100)
        {
            return  500;
        }
        else if (distance<=2000)
        {
            return 1100;
        }
        else
        {
            return 2200;
        }
    }
    public:
    void getdata(int Flight_number,string dest,float dist)
    {
        int fuel;
        flight_number=Flight_number;
        destination =dest;
        distance =dist;
        fuel = calFuel();
        cout<<"fuel: "<<fuel<<endl;
    }
    

    void showInfo()
    {
        cout<<"flight_number: "<<flight_number<<endl;
        cout<<"destination: "<<destination<<endl;
        cout<<"distance: "<<distance<<endl;
    }
};

int main()
{
    int Flight_number =5;
    string dest="Mumbai";
    float  dist =1400;
    float fuel;
    Flight flight1;
    flight1.getdata(Flight_number,dest,dist);
    //fuel =flight1.calFuel();
    //cout<<"fuel: "<<fuel<<endl;
    flight1.showInfo();


}
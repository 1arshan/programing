#include <bits/stdc++.h>
using namespace std;

class objectCounter{
    static int counter;
public:
    objectCounter();
    ~objectCounter();
    static void showObjectCount();
};

objectCounter::objectCounter(){
    cout<<"Object Created\n";
    counter++;
}

objectCounter::~objectCounter(){
    cout<<"Object Destroyed\n";
    counter--;
}

void objectCounter::showObjectCount(){
    cout<<"Current object count: "<<counter<<endl;
}

int objectCounter::counter = 0;

int main(){
    cout<<"Arshan Ahmad 18BCS075"<<endl;
    objectCounter object1;
    objectCounter::showObjectCount();
    objectCounter object2, object3;
    objectCounter::showObjectCount();
    return 0;
}
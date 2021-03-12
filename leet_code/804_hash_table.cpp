#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s = "Somewhere down the road";
    istringstream iss(s);
    string subs;
    do
    {
        
        iss >> subs;
        cout << "Substring: " << subs << endl;
    } while (iss);
}
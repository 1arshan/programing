#include<bits/stdc++.h>
#include<fstream>
using namespace std;
#define ll long long

int main(){
    vector<vector<int>> automata;
    int inState;
    ifstream dfaFile("p2b.txt");
    string line;
    int i=0;
    
    while(getline(dfaFile,line)){
        stringstream ss(line);
        vector<int> temp1;
        int value;
        if(i==0){
           ss>>value;
        //    cout << value << "\n";
           inState = value;
           i++;
           continue;
        }
        while(ss>>value){
            temp1.push_back(value);
        }
        automata.push_back(temp1);
    }
    string str;
    cout << "Enter the string: ";
    cin>>str;
    if(str[0]-48 == inState){
        int currState=inState;
        int nextState;
        int size = str.length();
        cout << automata[currState][automata[currState].size()-1] << " ";
        for(int i=0;i<size;i++){
            char a = str[i]-48;
            nextState = automata[currState][a];
            if(nextState == -1){
                break;
            }
            currState = nextState;
            cout << automata[currState][automata[currState].size()-1] << " ";
        }
    }
    else{
        cout << -1 << "\n";
    }
    return 0;
}
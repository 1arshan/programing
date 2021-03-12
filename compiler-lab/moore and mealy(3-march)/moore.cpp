#include<bits/stdc++.h>
#include<fstream>
using namespace std;
#define ll long long

int main(){
    vector<vector<int>> automata;
    int inState;
    vector<vector<int>> output;
    ifstream dfaFile("p2a.txt");
    string line;
    int i=0;
    
    while(getline(dfaFile,line)){
        stringstream ss(line);
        vector<int> temp1,temp2;
        int value;
        if(i==0){
           ss>>value;
        //    cout << value << "\n";
           inState = value;
           i++;
           continue;
        }
        int j=0;
        while(ss>>value){
            if(j%2){
                temp2.push_back(value);
                // cout << value << "\n";
            }
            else{
                temp1.push_back(value);
            }
            j++;
        }
        automata.push_back(temp1);
        output.push_back(temp2);
    }
    // cout << "Initial State:" << inState << "\n";
    // cout << "Automata:\n" ;
    // for(auto x:automata){
    //     for(auto y:x){
    //         cout << y << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\nOutput: \n" ; 
    // for(auto x:output){
    //     for(auto y:x){
    //         cout << y << " ";
    //     }
    //     cout << "\n";
    // }
    string str;
    cout << "Enter the string: ";
    cin>>str;
    if(str[0]-48 == inState){
        int currState=inState;
        int nextState;
        int size = str.length();
        for(int i=0;i<size;i++){
            char a = str[i]-48;
            nextState = automata[currState][a];
            if(nextState == -1){
                break;
            }
            cout << output[currState][a] << " ";
            currState = nextState;
        }
    }
    else{
        cout << -1 << "\n";
    }
    return 0;
}
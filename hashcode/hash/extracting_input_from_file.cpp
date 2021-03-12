#include<bits/stdc++.h>
using namespace std;
/*
int return_integer(string &myText,int prev_space_index,int index)
{
    string num;
    for(int i=prev_space_index;i<index;i++)
    {
        num.append(myText,);
    }
    return stoi(num);

}
*/

int push_into_array(string& myText,vector<int>&ques_parameter)
{
    int prev_space_index=0;
    string num;
    for(int i=0;i<myText.length();i++)
    {

        if(myText[i]==' ')
        {
            num.append(myText,prev_space_index,i-prev_space_index);
            ques_parameter.push_back(stoi(num));
            //cout<<num<<endl;
            num="";
            prev_space_index=i+1;
        }
        
    }
    return 1;
}

int main()
{
    string myText;
    ifstream MyReadFile("a.txt");
    int i =0;
    int index =0,nodes=0,sim_time=0,vertices=0,car=0;   //index
    int prev_space_index=0; //to store  
    vector<int>ques_parameter;


    //input from file and graph creation
    while (getline (MyReadFile, myText)) {
    // Output the text from the file
    
    if (i==0)
    {
        push_into_array(myText,ques_parameter);
        i++;
        sim_time=ques_parameter[0];
        nodes=ques_parameter[1];
        vertices=ques_parameter[2];
        car=ques_parameter[3];

    }
    else
    {
        cout << myText<<endl;
    }
   }


   //for (auto &x:ques_parameter)
    //cout<<x<<endl;
   //cout<<ques_parameter[0]<<endl;  
}
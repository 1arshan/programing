#include<bits/stdc++.h>
using namespace std;

int retrieve_input_for_graph(string &myText,unordered_map<string,string>&road_hash,vector<vector<int>>&graph_matrix)
{
    int prev_space_index=0;
    string num="",key_index="";
    int row=0,coloum=0,choice=0;
    
    // left:input data to hash table
    for(int i=0;i<myText.length();i++)
    {
        if(myText[i]==' '||i==myText.length()-1)
        {
            num.append(myText,prev_space_index,i-prev_space_index);
            prev_space_index=i+1;
            choice++;
        }
        switch (choice)
        {
        case 1:
            row=stoi(num);
            //key_index.append(num); //key in hash table row+cloumn
            num=""; 
            break;
        case 2:
            coloum=stoi(num);
            //key_index.append(num)
            num=""; 
            break;
        case 3:
            mi.row=row;
            mi.col=coloum;
            road_hash.insert(num,mi);
            num="";
            break;
        case 4:
            graph_matrix[row][coloum]=stoi(num); //adjacency amtrix    
            break;
        }  
    }
    return 1;
}


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
    unordered_map<string,pair<int,int>>road_hash; //road name with node



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
    {   vector<vector<int>> graph_matrix(nodes, vector<int> (nodes, 0));
        cout << myText<<endl;
        retrieve_input_for_graph(myText,road_hash,graph_matrix);
    }
   }


   //for (auto &x:ques_parameter)
    //cout<<x<<endl;
   //cout<<ques_parameter[0]<<endl;  
}
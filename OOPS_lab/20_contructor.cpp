#include<bits/stdc++.h>

using namespace std;

class ObjectCount{
     int variable;
    public:
       static int no_of_object_created;
       static int no_of_object_destructed;
       ObjectCount(){
           no_of_object_created++;
       }

       void setNumber(){
          cout<<"Enter the number"<<endl;
          cin>>variable;
       }

       void setNumber(int number){
          variable= number;
       }

       ~ObjectCount(){
          no_of_object_destructed++;
       }
};
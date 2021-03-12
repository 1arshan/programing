#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v{8,5,10,12,14,11,18,13,20,19,18,12,10};
    int k =3;
    //vector<int>v2[v.size()-k+1];

    deque<int>q;
    int i =0;
    q.push_front(0);
    //cout<<"size: "<<q.size()<<endl;
    deque <int> :: iterator it; 
    for(i=1;i<v.size();i++)
    {
        if(i-q[0]<3)
        {
            if(v[q[0]]<v[i])
            {   //cout<<"1 "<<v[i]<<" "<<q[0]<<endl;
                q.clear();
                q.push_front(i);
            }
            else if(q.size()==1)
            {
            //deque <int> :: iterator it; 
            //for (it = q.begin(); it != q.end(); ++it) 
            //cout << *it<< '\t' ; 
            //cout << '\n';
            //cout<<"2"<<endl;
            q.push_back(i);

            }
            else
            {
                if(v[q[1]]<v[i])
                {
                    //cout<<"3"<<endl;
                    q.pop_back();
                    q.push_back(i);
                }
                else
                {
                    //cout<<"4"<<endl;
                    q.push_back(i);
                }   
            }
        }
        else
        {
            //cout<<"5"<<endl;
            q.pop_front();
            i--;
            continue;
        }
        //cout<<"q[0]: "<<v[q[0]]<<" i: "<<i+1<<endl;
        /*cout<<"Deque Printing"<<endl;
        for (it = q.begin(); it != q.end(); ++it) 
        cout << v[*it]<< '\t' ; 
        cout << '\n';
        */
       if(i>1)
       cout<<v[q[0]]<<endl;
    }
}
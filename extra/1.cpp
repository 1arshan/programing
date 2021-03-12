#include<bits/stdc++.h>
using namespace std;

int N,pgFrame,x[100],pg[50],ht=0,Pg_fault=0;

void Data(){
    
    std::cout << "Enter the length of process: ";
    
    std::cin >> N;
    
    std::cout << "Enter the process: ";
    
    for(int i=0; i<N; i++){
        
        std::cin >> x[i];
    }
    
    std::cout << "Enter the Page Frame: ";
    
    std::cin >> pgFrame;
}

void intial(){
    
    Pg_fault=0;
    
    for( int i=0; i<pgFrame;i++){
        
        pg[i]=9999;
    }
}

int Hit(int Data){
    
    ht=0;
    
    for(int i=0;i<pgFrame;i++){
        
        if(pg[i]==Data){
            
            ht=1;
            break;
        }
        
    }
    
    return ht;
    
}

int HitIndex(int Data)
{
    int hitind;
    for(int k=0; k<pgFrame; k++)
    {
        if(pg[k]==Data)
        {
            hitind=k;
            break;
        }
    }
    return hitind;
}

void dispPages()
{
    for (int k=0; k<pgFrame; k++)
    {
        if(pg[k]!=9999)
        
        cout<<pg[k];
        
    }
    
}

void disp(){
    
    cout<<"\nTotal number of page faults are: "<<Pg_fault;
    
}

void SecondChance(){
    
    int usedBit[50];
    int vptr=0;
    intial();
    
    for(int i=0;i<pgFrame;i++)
        
        usedBit[i]=0;
    
    for(int i=0;i<N;i++){
        
        cout<<"\n For "<<x[i]<<":";
        
        if(Hit(x[i])){
            
            cout<<"No page fault found";
            
            int hitindex=HitIndex(x[i]);
            
            if(usedBit[hitindex]==0)
            
            usedBit[hitindex]==1;
        }
        
        else{
            
            Pg_fault++;
            
            if(usedBit[vptr]==1){
                
                while(usedBit[vptr]!=0){
                    
                    usedBit[vptr]=0;
                    vptr++;
                    if(vptr==pgFrame)
                    vptr=0;
                }
                
            }
                
                if(usedBit[vptr]==0){
                    
                    pg[vptr]=x[i];
                    
                    usedBit[vptr]=1;
                    
                    vptr++;
                }
                
                dispPages();
                
        }
                
                if(vptr==pgFrame)
                
                vptr=0;
            }
            
            disp();
        }
    
int main(){
    
    cout<<"NAME: ARSHAN AHMAD\tROLL NO.: 18BCS075\tCLASS:B.Tech 4th SEMESTER\n";
    
    
    
    int Choice;
    
    cout<<"<=============Second Chance============>";
    
    while(1){
    
    cout<<"\n1.Enter the Data\n2.Second Chance\n3.Exit\nEnter Your Choice: ";
    
    cin>>Choice;
    
    switch(Choice){
        
        case 1:
        Data();
        break;
        
        case 2:
        SecondChance();
        break;
        
        default:
        return 0;
        break;
    }
  }
}



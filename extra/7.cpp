
#include <iostream>
using namespace std;
int main() {
int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
cout<<"Matrix A:\n";
cout << "Rows: ";
cin >> r1;
cout << "Column: ";
cin >> c1;
cout<<"\n";
cout<<"Matrix B:\n";
cout << "Rows: ";
cin >> r2;
cout << "Column: ";
cin >> c2;
while (c1 != r2) {
cout << "Error! column of first matrix not equal to row of second.";
cout<<"Matrix A:\n";
cout << "Rows: ";
cin >> r1;
cout << "Column: ";
cin >> c1;
cout<<"\n";
cout<<"Matrix B:\n";
cout << "Rows: ";
cin >> r2;
cout << "Column: ";
cin >> c2;
}
cout << endl << "Enter elements of matrix A:" << endl;
for (i = 0; i < r1; ++i)
for (j = 0; j < c1; ++j) {
cout << "Enter element a[" << i + 1<<"][" << j + 1 << "] : ";
cin >> a[i][j];
}
cout << endl << "Enter elements of matrix B:" << endl;
for (i = 0; i < r2; ++i)
for (j = 0; j < c2; ++j) {
cout << "Enter element b[" << i + 1<<"][" << j + 1 << "] : ";
cin >> b[i][j];
}
for (i = 0; i < r1; ++i)
for (j = 0; j < c2; ++j) {
mult[i][j] = 0;
}
for (i = 0; i < r1; ++i)
for (j = 0; j < c2; ++j)
for (k = 0; k < c1; ++k) {
mult[i][j] += a[i][k] * b[k][j];
}
cout << endl << "C: " << endl;
for (i = 0; i < r1; ++i)
for (j = 0; j < c2; ++j) {
cout << " " << mult[i][j];
if (j == c2 - 1)
cout << endl;
}
return 0;
} 
Justification
 

















Sol 2].
#include <bits/stdc++.h>
using namespace std;
bool isMagicSquare(vector <vector <int> >mat){
int n=mat.size();
int sum = 0,sum2=0;
for (int i = 0; i < n; i++)
sum = sum + mat[i][i];
for (int i = 0; i < n; i++)
sum2 = sum2 + mat[i][N-1-i];
if(sum!=sum2)
return false;
for (int i = 0; i < n; i++) {
int rowSum = 0;
for (int j = 0; j < n; j++)
rowSum += mat[i][j];
if (rowSum != sum)
return false;
}
for (int i = 0; i < n; i++) {
int colSum = 0;
for (int j = 0; j < n; j++)
colSum += mat[j][i];
if (sum != colSum)
return false;
}
return true;
}
int main(){
int tmp;
cout<<"Enter matrix order: ";int n; cin>>n;
vector<vector<int> > mat( n , vector<int> (n, 0));
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
cout<<"enter Element at["<<i<<"]["<<j<<"]: ";
cin>>tmp;
mat[i][j]=tmp;
}
}
if (isMagicSquare(mat))
cout << "Magic Square";
else
cout << "Not a magic Square";
return 0;
}
Output
 








Sol 3].
#include <iostream>
using namespace std;
int main(){
long long n, t1 = 1, t2 = 1, nextTerm = 0;
n=40;
cout<<"first 40 fibonacci numbers: ";
for (int i = 1; i <= n; ++i){
if(i == 1){
cout << t1<<" ";
continue;
}
if(i == 2){
cout << t2 << " ";
continue;
}
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
cout << nextTerm << " ";
}
float t11 = 1, t22 = 1, nextTerm1 = 0;n=40;
cout<<"\nRatio f(i+1)/f(i): ";
for (int i = 1; i <= n-1; ++i){
if(i == 1){
cout << t11<<" ";
continue;
}
if(i == 2){
cout << t11/t22 << " ";
continue;
}
nextTerm1 = t11 + t22;
t11 = t22;
cout << nextTerm1/t22 << " ";
t22 = nextTerm1;
}
return 0;
} 
Justification
 














Sol 4].
#include <iostream>
using namespace std;
void swap(int &x, int &y){
int temp = x;
x = y;
y = temp;
}
int gcd(int n,int m){
int tmp;
if(n%m==0)
return m;
if(n<m)
swap(n,m);
while(m>0){
n=n%m;
swap(n,m);
}
return n;
}
int main(){
int n1,n2;
cout<<”Enter Two Numbers”;
cin>>n1;
cin>>n2;
cout<<gcd(n1,n2);
}
Justification

 
Ans 5]. #include <iostream>
#include<string>
using namespace std;
struct student{
string name;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
int sub6;
int sub7;
int sub8;
int sub9;
int sub10;
int mo;
};
int main() {
struct student s[80];
int count=0;
int mm;//max marks
int mo;//marks obtain
int fitstRank=0;
int firstRankMarks;
cout<<"Enter Maxmum Marks for each subject: ";cin>>mm;
for(int i=0;i<80;i++){
cin.ignore(1,'\n');
cout<<"Name of student "<<i+1<< "(enter 'x' to calculate marks)"<<": ";
getline(cin, s[i].name);
//cin>>;
if(s[i].name=="x"){break;}
cout<<"enter obtain marks in subjects";
cout<<"\nsubject1 :";cin>>s[i].sub1;
cout<<"\nsubject2 :";cin>>s[i].sub2;
cout<<"\nsubject3 :";cin>>s[i].sub3;
cout<<"\nsubject4 :";cin>>s[i].sub4;
cout<<"\nsubject5 :";cin>>s[i].sub5;
cout<<"\nsubject6 :";cin>>s[i].sub6;
cout<<"\nsubject7 :";cin>>s[i].sub7;
cout<<"\nsubject8 :";cin>>s[i].sub8;
cout<<"\nsubject9 :";cin>>s[i].sub9;
cout<<"\nsubject10 :";cin>>s[i].sub10;
s[i].mo=(s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5+s[i].sub6+s[i].sub7+s[i].sub8+s[i].sub9+s
[i].sub10);
if(i==0){
firstRankMarks=s[i].mo;
fitstRank=0;
}else{
if(s[i].mo>firstRankMarks){
fitstRank=i;
firstRankMarks=s[i].mo;
}
}
count++;
}
cout<<"\ncalculating Marks\n";
cout<<"\n*-------------*-------------*\n*-------------*-------------*\n";
cout<<"First Rank in Class: "<<s[fitstRank].name<<" Percentage Marks:
"<<(s[fitstRank].mo*100)/(mm*10)<<"%";
cout<<"\n*-------------*-------------*\n*-------------*-------------*\n";
cout<<"\n*-------------*-------------**-------------*-------------*\n";
for(int i=0;i<count;i++){
mo=(s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4+s[i].sub5+s[i].sub6+s[i].sub7+s[i].sub8+s[i].sub9+s[i].s
ub10);
cout<<"Name: "<<s[i].name<<"\t\tTotal Marks:
"<<mo<<"/"<<mm*10<<"("<<(mo*100/(mm*10))<<"%)"<<"\t\tAverage Marks:
"<<mo/(float)10<<"\n";
cout<<"Sn. Subject Name\t\tMarks Obtain\t\tTotalMarks"<<"\n";
cout<<"1 Subject 1\t\t"<<s[i].sub1<<"\t\t"<<mm<<"\n";
cout<<"2 Subject 2\t\t"<<s[i].sub2<<"\t\t"<<mm<<"\n";
cout<<"3 Subject 3\t\t"<<s[i].sub3<<"\t\t"<<mm<<"\n";
cout<<"4 Subject 4\t\t"<<s[i].sub4<<"\t\t"<<mm<<"\n";
cout<<"5 Subject 5\t\t"<<s[i].sub5<<"\t\t"<<mm<<"\n";
cout<<"6 Subject 6\t\t"<<s[i].sub6<<"\t\t"<<mm<<"\n";
cout<<"7 Subject 7\t\t"<<s[i].sub7<<"\t\t"<<mm<<"\n";
cout<<"8 Subject 8\t\t"<<s[i].sub8<<"\t\t"<<mm<<"\n";
cout<<"9 Subject 9\t\t"<<s[i].sub9<<"\t\t"<<mm<<"\n";
cout<<"10 Subject 10\t\t"<<s[i].sub10<<"\t\t"<<mm<<"\n";
cout<<"\n*-------------*-------------**-------------*-------------*\n";
}
}









Output
 














Ans 6].
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double fun(double x){
return(x*x*x*x - 8*x*x*x - x*x + 68*x + 60);
}
const double TOL=1e-5;
int main(){
double x3,x1,x2,xs,f1,f2,f3;
int iter=0;
cout << "Enter brackting numbers x1, x2" << endl;
cin>>x1>>x2;
f1=fun(x1);
f2=fun(x2);
if((f1*f2)>0){
cout<<"\nDoesn't bracket...\n";
}
else{
do{
xs=x3;
x3=x1-(f1*(x2-x1))/(f2-f1);
f3=fun(x3);
iter++;
cout<<setprecision(10)<<setw(3)<<iter<<setw(15)<<x1<<setw(15)<<x2<<se
tw(15)<<fun(x3)<<endl;
if((f1*f3)<0)
x2=x3;
else
x1=x3;
f1=fun(x1);
f2=fun(x2);
}while(fabs(fun(x3))>=TOL);//Terminating case
}
cout<<"\nThe root of the equation is :"<<x3;
cout<<"\n\nf(x)="<<fun(x3);
return 0;
}
 Output
 




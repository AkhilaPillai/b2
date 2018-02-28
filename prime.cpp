#include<iostream>
using namespace std;
int main()
{
int a,v=0,i;
cout<<"enter a"<<endl;
cin>>a;
for(i=1;i<=a;i++)
{
if(a%i==0)
{
v++;
}
}
if(v==2)
cout<<"prime";
else
cout<<"not prime;
}

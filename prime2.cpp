#include<iostream>
using namespace std;
int main()
{
int a,v,n,i;
cout<<"enter a,v"<<endl;
cin>>a>>v;
while(a<v)
{
n=0;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
n=1;
break;
}
}
if(n==0)
cout<<a<<" ";
++a;
}
return 0;
}

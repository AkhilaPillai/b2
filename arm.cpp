#include <iostream>
using namespace std;
int main()
{
int n,d,s=0,num;
cout<<"enter n";
cin>>n;
num=n;
while(n!=0)
{
d=n%10;
s=s+(d*d*d);
n=n/10;
}
if(s==num)
{
cout<<"yes";
}
else
{
cout<<"no";
}
}

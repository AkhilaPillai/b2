#include<iostream>
using namespace std;
int main()
{
int a,d,r=0;
cout<<"enter a"<<endl;
cin>>a;
do
{
d=a%10;
r=(r*10)+d;
a=a/10;
}
while(a!=0);
if(a==r)
cout<<"palindrome";
else
cout<<"not palindrome;
}

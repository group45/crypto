#include<iostream>
using namespace std;
int main()
{
  int a,s,d,f;
  cout<<"a="; cin>>a;
  cout<<"s="; cin>>s;
  cout<<"d="; cin>>d;
  cout<<"f="; cin>>f;
  cout<<(a+s+d+f)%10<<endl;
  cout<<(a+d+s+f)<<endl;
  return 0;
}
    

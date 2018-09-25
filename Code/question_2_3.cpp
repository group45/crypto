#include <iostream>
using namespace std;
int main(){
  int a,s,d,f,g;
  cout<<"а=";cin>>a;
  cout<<"s=";cin>>s;
  cout<<"d=";cin>>d;
  cout<<"f=";cin>>f;
  cout<<"g=";cin>>g;
  int max_m,min_m;
  max_m=a; min_m=a;
  if(max_m<s)
    max_m=s;
  if(max_m<d)
    max_m=d;
  if(max_m<f)
    max_m=f;
  if(max_m<g)
    max_m=g;
   if(min_m>s)
    min_m=s;
  if(min_m>d)
    min_m=d;
  if(min_m>f)
    min_m=f;
  if(min_m>g)
    min_m=g;
  cout<<max_m+min_m<<endl;
  return 0;   
}

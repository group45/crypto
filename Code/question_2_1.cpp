#include<iostream>
using namespace std;

main()
{
  int a,b,c,d,e;
  cout<<"a="; cin>>a;
  cout<<"b="; cin>>b;
  cout<<"c="; cin>>c;
  cout<<"d="; cin>>d;
  cout<<"e="; cin>>e;

  int zero=0,  negative=0, positive=0;

  if (a<0)
    negative++;
  else
    if (a>0)
      positive++;
    else
      zero++;

  if (b<0)
    negative++;
  else
    if (b>0)
      positive++;
    else
      zero++;

  if (c<0)
    negative++;
  else
    if (c>0)
      positive++;
    else
      zero++;

  if (d<0)
    negative++;
  else
    if (d>0)
      positive++;
    else
      zero++;

  if (e<0)
    negative++;
  else
    if (e>0)
      positive++;
    else
      zero++;

  cout<<"Количество нулевых: "<<zero<<endl;
  cout<<"Количество положительных: "<<positive<<endl;
  cout<<"Количество отрицательных: "<<negative<<endl;

  return 0;
}
  

#include <iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"a"; cin>>a;
  cout<<"b"; cin>>b;
  cout<<"c"; cin>>c;
  int MIN,SRED,MAX;
  if (a>b && a>c)
    {
      MAX=a;
      if(b>c)
	{
	  SRED=b;
	  MIN=c;
	}
      else
	{
	  SRED=c;
	  MIN=b;
	}
    }
  else
    if(a>b && a<c)
      {
	SRED=a;
	if(b>c)
	  {
	    MAX=b;
	    MIN=c;	 
	  }
	else
	  {
	    MAX=c;
	    MIN=b;
	  }
      }
    else
      if (a>c && a<b)
	{
	  SRED=a;
	  if(b>c)
	    {
	      MAX=b;
	      MIN=c;	 
	    }
	  else
	    {
	      MAX=c;
	      MIN=b;
	    }
	}
      else
	{
	  MIN=a;
	  if(b>c)
	    {
	      MAX=b;
	      SRED=c;
	    }
	  else
	    {
	      SRED=c;
	      MAX=b;
	    }
	}
  cout<<MIN<<" "<<SRED<<" "<<MAX<<endl;
  return 0;
}
  
  
  
  
      
     

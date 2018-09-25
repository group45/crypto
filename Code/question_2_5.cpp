#include <iostream>
using namespace std;

int main(){
  double a,b,c;
  cout<<"a = "; cin>>a;
  cout<<"b = "; cin>>b;
  cout<<"c = "; cin>>c;
  double q=-1;
  if(a <= b and b<=c){
      a*=2;
      b*=2;
      c*=2;
    }
    else{
      a*=q;  
      b*=q;
      c*=q;
    }
  cout<<" A = "<<a<<" B = "<<b<<" C = "<<c<<endl;
  return 0;
}

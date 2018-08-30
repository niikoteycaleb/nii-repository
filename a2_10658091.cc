#include <iostream>
using namespace std; 
int main()
{
  int n, i;
  bool primenumber=true;
  cout <<"Please enter any positive number:";
  cin >>n;
  for(i=2; i<=n/2; i++)
  {
    if(n%i==0)
    {
      primenumber=false;
      break;
    }
  }
    if(primenumber)
      cout <<"This is a prime number";
    else
      cout <<"This is not a prime number";
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

long long power(long long x,long long y)
{
  long long u=1;
  for(long long i=0;i<y;i++)
    u*=x;
  return u;
}

int main()
{
  long long a,b;
  cin>>a>>b;
  cout<<power(a,b)+power(b,a)<<"\n";
  return 0;
}
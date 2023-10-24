#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
  fastio;
  long long a,b,c,k;
  cin>>a>>b>>c>>k;
  cout<<min(a,k)+max(0LL,min(k-a,b))*0+max(0LL,min(k-a-b,c))*(-1)<<"\n";
}
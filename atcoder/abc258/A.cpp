#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
  int n,a,b;
  cin>>n;
  a=21+(n/60);
  b=n%60;
  cout<<a<<":";
  if(b<10)
    cout<<0;
  cout<<b;
  return 0;
}
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,mn=0,mx=0;
    cin>>n>>m;
    long long d=n/m;
    long long r=n%m;
    mx=((n-m)*(n-m+1))/2;
    mn=(m-r)*((d*(d-1))/2)+r*((d*(d+1))/2);
    //mn=(m-1)*((d*(d-1))/2)+((d+r)*(d+r-1))/2;
    cout<<mn<<" "<<mx<<"\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main() {
	// your code goes here
	fastio;
    long long n,i,j,a,b,mn;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<(1<<n);i++)
    {
        a=0; b=0;
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
                a+=ara[j];
            else
                b+=ara[j];
        }
        if(i==0)
            mn=max(a,b);
        else
            mn=min(mn,max(a,b));
    }
    cout<<mn<<"\n";
    return 0;
}

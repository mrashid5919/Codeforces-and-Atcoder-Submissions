#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,p[200],i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>p[i];
    prev_permutation(p,p+n);
    for(i=0;i<n;i++)
        cout<<p[i]<<" ";
    return 0;
}

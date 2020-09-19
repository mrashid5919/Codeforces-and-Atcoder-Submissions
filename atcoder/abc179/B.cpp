#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,p=0,a[103],b[103];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    for(i=0;i<n-2;i++)
    {
        if(a[i]==b[i] && a[i+1]==b[i+1] && a[i+2]==b[i+2])
        {
            p=1;
            break;
        }
    }
    if(p==0)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}

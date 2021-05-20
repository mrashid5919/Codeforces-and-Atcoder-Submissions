#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,z;
    string b;
    cin>>t;
    while(t--)
    {
        z=0;
        cin>>n;
        cin>>b;
        for(i=0;i<n;i++)
        {
            if(b[i]=='0')
                z++;
        }
        if(z%2==0 || z==1)
            cout<<"BOB"<<"\n";
        else
            cout<<"ALICE"<<"\n";
    }
    return 0;
}

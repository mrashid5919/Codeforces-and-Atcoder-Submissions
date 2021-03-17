#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,ara[105];
    cin>>t;
    while(t--)
    {
        int count[105]={0};
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            count[ara[i]]++;
        }
        for(i=0;i<=100;i++)
        {
            if(count[i]>0)
                cout<<i<<" ";
        }
        for(i=0;i<=100;i++)
        {
            if(count[i]>1)
            {
                for(j=0;j<count[i]-1;j++)
                    cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

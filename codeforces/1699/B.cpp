#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(((i+1)/2)%2)
                {
                    if(((j+1)/2)%2)
                        cout<<0<<" ";
                    else
                        cout<<1<<" ";
                }
                else
                {
                    if(((j+1)/2)%2)
                        cout<<1<<" ";
                    else
                        cout<<0<<" ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}

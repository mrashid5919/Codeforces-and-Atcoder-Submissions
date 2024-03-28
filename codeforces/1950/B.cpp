#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<2*n;i++)
        {
            for(j=0;j<2*n;j++)
            {
                if((i/2)%2==0 && (j/2)%2==0 || (i/2)%2==1 && (j/2)%2==1)
                    cout<<"#";
                else
                    cout<<".";
            }
            cout<<"\n";
        }
    }
    return 0;
}
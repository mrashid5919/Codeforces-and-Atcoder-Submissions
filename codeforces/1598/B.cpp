#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,j,k,ara[10005][10],br[10][10005],p=0;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cin>>ara[i][j];
                br[j][i]=ara[i][j];
            }
        }
        for(i=0; i<5; i++)
        {
            for(j=i+1; j<5; j++)
            {
                int x=0,y=0,s=0;
                for(k=0; k<n; k++)
                {
                    if(br[i][k]==1 && br[j][k]==1)
                        s++;
                    else if(br[i][k]==1)
                        x++;
                    else if(br[j][k]==1)
                        y++;
                }
                if(x+s>=n/2 && y+s>=n/2 && max(0,n/2-x)+max(0,n/2-y)<=s)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

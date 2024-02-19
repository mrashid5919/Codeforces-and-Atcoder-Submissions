#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,i,j,cnt,cur;
    char ara[15][15];
    cin>>t;
    while(t--)
    {
        cur=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cin>>ara[i][j];
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                for(j=0;j<n;j++)
                {
                    if(ara[i][j]=='1')
                        cur++;
                }
            }
            else
            {
                cnt=cur;
                cur=0;
                for(j=0;j<n;j++)
                {
                    if(ara[i][j]=='1')
                        cur++;
                }
                if(cnt>0)
                {
                    if(cur==cnt)
                        cout<<"SQUARE\n";
                    else
                        cout<<"TRIANGLE\n";
                    break;
                }
            }
        }
    }
    return 0;
}
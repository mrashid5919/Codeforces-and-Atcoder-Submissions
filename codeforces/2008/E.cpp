#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int od[30][200005],ev[30][200005];

int main()
{
    fastio;
    int t,n,i,j,mn,mxod,mxev;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<26;i++)
        {
            od[i][0]=0;
            ev[i][0]=0;
        }
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<26;j++)
                {
                    if(s[i-1]-'a'==j)
                        ev[j][i]=ev[j][i-1]+1;
                    else
                        ev[j][i]=ev[j][i-1];
                    od[j][i]=od[j][i-1];
                }
            }
            else
            {
                for(j=0;j<26;j++)
                {
                    if(s[i-1]-'a'==j)
                        od[j][i]=od[j][i-1]+1;
                    else
                        od[j][i]=od[j][i-1];
                    ev[j][i]=ev[j][i-1];
                }
            }
        }
        mxod=0;
        mxev=0;
        for(i=0;i<26;i++)
        {
            mxod=max(mxod,od[i][n]);
            mxev=max(mxev,ev[i][n]);
        }
        //cout<<mxod<<" "<<mxev<<"\n";
        mn=(n/2+n%2)-mxod+(n/2)-mxev+n%2;
        // if(n%2==1)
        //     mn=max(1,mn);
        if(n%2==0)
        {
            cout<<mn<<"\n";
            continue;
        }
        for(i=1;i<=n;i++)
        {
            mxod=0;
            mxev=0;
            if(i%2==0)
            {
                for(j=0;j<26;j++)
                {
                    mxod=max(mxod,od[j][i]+ev[j][n]-ev[j][i]);
                    mxev=max(mxev,ev[j][i-1]+od[j][n]-od[j][i]);
                }
            }
            else
            {
                for(j=0;j<26;j++)
                {
                    mxod=max(mxod,od[j][i-1]+ev[j][n]-ev[j][i]);
                    mxev=max(mxev,ev[j][i]+od[j][n]-od[j][i]);
                }
            }
            mn=min(mn,n-mxod-mxev);
            //cout<<mn<<"\n";
        }
        cout<<mn<<"\n";
    }
    return 0;
}
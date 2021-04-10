#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    char ara[405][405];
    int t,n,i,j,i1,j1,i2,j2,p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ara[i][j];
                if(ara[i][j]=='*')
                {
                    if(p==0)
                    {
                        i1=i;
                        j1=j;
                        p=1;
                    }
                    else
                    {
                        i2=i;
                        j2=j;
                    }
                }
            }
        }
        if(i1==i2)
        {
            if(i1==n-1)
            {
                ara[i1-1][j1]='*';
                ara[i1-1][j2]='*';
            }
            else
            {
                ara[i1+1][j1]='*';
                ara[i1+1][j2]='*';
            }
        }
        else if(j1==j2)
        {
            if(j1==n-1)
            {
                ara[i1][j1-1]='*';
                ara[i2][j1-1]='*';
            }
            else
            {
                ara[i1][j1+1]='*';
                ara[i2][j1+1]='*';
            }
        }
        else
        {
            ara[i1][j2]='*';
            ara[i2][j1]='*';
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<ara[i][j];
            cout<<"\n";
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005][35];

int main()
{
    fastio;
    long long n,m,i,mx,j,low,high,mid;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<26;i++)
        ara[0][i]=0;
    for(i=1;i<=n;i++)
    {
        int x=s[i-1]-'a';
        for(j=0;j<26;j++)
        {
            if(j==x)
                ara[i][j]=ara[i-1][j]+1;
            else
                ara[i][j]=ara[i-1][j];
        }
    }
    cin>>m;
    while(m--)
    {
        string nm;
        cin>>nm;
        int b[35]={0};
        for(i=0;i<nm.size();i++)
            b[nm[i]-'a']++;
        mx=0;
        for(i=0;i<26;i++)
        {
            if(b[i]>0)
            {
                low=1;
                high=n;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(ara[mid][i]>=b[i] && ara[mid-1][i]<b[i])
                    {
                        mx=max(mx,mid);
                        break;
                    }
                    else if(ara[mid][i]>=b[i])
                        high=mid-1;
                    else
                        low=mid+1;
                }
            }
            //cout<<mx<<"\n";
        }
        cout<<mx<<"\n";
    }
    return 0;
}

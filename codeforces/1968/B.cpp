#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,m,i,j,idx,cnt;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>a>>b;
        idx=-1;
        cnt=0;
        for(i=0;i<n;i++)
        {
            int f=0;
            for(j=idx+1;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    f=1;
                    idx=j;
                    cnt++;
                    break;
                }
            }
            if(f==0)
                break;
        }
        cout<<cnt<<"\n";
    }
}
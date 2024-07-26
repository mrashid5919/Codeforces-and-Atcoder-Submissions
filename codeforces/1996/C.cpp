#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int a[30][200005],b[30][200005];

int main()
{
    fastio;
    int t,n,q,i,j,cnt,l,r;
    string s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        cin>>s1>>s2;
        for(i=0;i<26;i++)
        {
            a[i][0]=0;
            b[i][0]=0;
        }
        for(i=1;i<=n;i++)
        {
            for(j=0;j<26;j++)
            {
                if(j==s1[i-1]-'a')
                    a[j][i]=a[j][i-1]+1;
                else
                    a[j][i]=a[j][i-1];
                if(j==s2[i-1]-'a')
                    b[j][i]=b[j][i-1]+1;
                else
                    b[j][i]=b[j][i-1];
            }
        }
        while(q--)
        {
            cin>>l>>r;
            cnt=0;
            for(i=0;i<26;i++)
            {
                cnt+=abs((a[i][r]-a[i][l-1])-(b[i][r]-b[i][l-1]));
            }
            cout<<cnt/2<<"\n";
        }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int co[200005];

int main()
{
    fastio;
    int t,n,k,i,sum;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        sum=0;
        for(i=0; i<n; i++)
        {
            if(i==n-1)
                co[i]=k-sum;
            else
            {
                if(k%2==0)
                {
                    if(s[i]=='1')
                        co[i]=0;
                    else
                    {
                        if(sum<k)
                        {
                            co[i]=1;
                            sum++;
                        }
                        else
                            co[i]=0;
                    }
                }
                else
                {
                    if(s[i]=='0')
                        co[i]=0;
                    else
                    {
                        if(sum<k)
                        {
                            co[i]=1;
                            sum++;
                        }
                        else
                            co[i]=0;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            int x=(k-co[i])%2;
            if(x==0)
                cout<<s[i];
            else if(s[i]=='0')
                cout<<'1';
            else
                cout<<'0';
        }
        cout<<"\n";
        for(i=0;i<n;i++)
            cout<<co[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

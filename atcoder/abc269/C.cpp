#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long n,c=0,flag=0,i;
    vector<long long> ans;
    ans.push_back(0LL);
    cin>>n;
    long long m=n;
    while(n!=0)
    {
        if(flag==1)
            break;
        if(n%2==1)
        {
            long long p=power(2,c);
            long long x=ans.size();
            for(i=0;i<x;i++)
            {
                long long tmp=p+ans[i];
                if(tmp<=m/2)
                    ans.push_back(tmp);
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        n/=2;
        c++;
    }
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<"\n";
    for(i=ans.size()-1;i>=0;i--){
        if(m-ans[i]!=ans[i])
            cout<<m-ans[i]<<"\n";
    }
    return 0;
}

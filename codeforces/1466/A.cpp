#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[55],ans[2500],j,count,c;
    cin>>t;
    while(t--)
    {
        count=0;
        c=1;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(n==1)
        {
           cout<<0<<"\n";
           continue;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                ans[count]=ara[j]-ara[i];
                count++;
            }
        }
        sort(ans,ans+count);
        for(i=1;i<count;i++)
        {
            if(ans[i]!=ans[i-1])
                c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}

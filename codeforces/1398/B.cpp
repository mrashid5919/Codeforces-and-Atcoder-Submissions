#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t,n,i,j,ara[102],count,ans;
    string s;
    cin>>t;
    while(t--)
    {
        ans=0;
        count=0;
        for(i=0;i<100;i++)
            ara[i]=0;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(i==0)
                    ara[count]++;
                else if(s[i-1]=='1')
                    ara[count]++;
                else
                {
                    count++;
                    ara[count]++;
                }
            }
        }
        if(count==0)
        {
            if(ara[count]>0)
            {
                cout<<ara[count]<<endl;
                continue;
            }
            else
            {
                cout<<0<<endl;
                continue;
            }
        }
        sort(ara,ara+count+1,greater<int>());
        for(i=0;i<=count;i=i+2)
            ans=ans+ara[i];
        cout<<ans<<endl;
    }
    return 0;
}



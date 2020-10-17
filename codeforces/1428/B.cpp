#include<bits/stdc++.h>
#include<string>
#include<cmath>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,count,h,l,r;
    static long long ara[300002];
    string str;
    cin>>t;
    while(t--)
    {
        h=0;
        l=0;
        r=0;
        count=0;
        cin>>n;
        cin>>str;
        for(i=0;i<n;i++)
            ara[i]=0;
        for(i=0;i<n;i++)
        {
            if(str[i]=='-')
                h++;
            else if(str[i]=='>')
                r++;
            else
                l++;
        }
        if(l+h==n || r+h==n)
        {
            cout<<n<<"\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(str[i]=='-')
            {
                ara[i]=1;
                ara[(i+1)%n]=1;
            }
        }
        for(i=0;i<n;i++)
            count=count+ara[i];
        cout<<count<<"\n";
    }
    return 0;
}

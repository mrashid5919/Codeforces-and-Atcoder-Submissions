#include<bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    io;
    int n,i,w[105],sum=0,p=0,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>w[i];
        sum=sum+w[i];
    }
    sum=sum/2;
    for(i=0;i<n;i++)
    {
        if(s+w[i]<sum)
            s=s+w[i];
        else if(s+w[i]==sum)
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"YES"<<endl;
    else
    {
        s=0;
        for(i=n-1; i>=0; i--)
        {
            if(s+w[i]<sum)
                s=s+w[i];
            else if(s+w[i]==sum)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

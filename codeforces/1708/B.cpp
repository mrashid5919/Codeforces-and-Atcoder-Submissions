#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,l,r,p,temp;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        p=0;
        for(i=0;i<n;i++)
        {
            if(l%(i+1)==0)
                ara[i]=l;
            else
            {
                temp=(1+l/(i+1))*(i+1);
                if(temp>r)
                {
                    p=1;
                    break;
                }
                ara[i]=temp;
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(i=0;i<n;i++)
                cout<<ara[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

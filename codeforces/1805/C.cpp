#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,m,i,x,y,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<long long> k;
        for(i=0;i<n;i++)
        {
            cin>>x;
            k.push_back(x);
        }
        sort(k.begin(),k.end());
        while(m--)
        {
            cin>>a>>b>>c;
            long long low=0;
            long long high=n-2;
            long long mid;
            x=-1;
            y=-1;
            if(b>=k[n-1]){
                x=k[n-1];
                y=k[n-1];
            }
            else if(b<=k[0])
            {
                x=k[0];
                y=k[0];
            }
            else
            {
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(k[mid]<=b && k[mid+1]>b)
                    {
                        x=k[mid];
                        y=k[mid+1];
                        break;
                    }
                    else if(k[mid]<=b)
                        low=mid+1;
                    else
                        high=mid-1;
                }
            }
            if((b-x)*(b-x)<4*a*c)
            {
                cout<<"YES\n";
                cout<<x<<"\n";
            }
            else if((b-y)*(b-y)<4*a*c)
            {
                cout<<"YES\n";
                cout<<y<<"\n";
            }
            else
                cout<<"NO\n";
        }
        //cout<<"\n";
    }
    return 0;
}

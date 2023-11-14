#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long a[300005],b[300005];

int main()
{
    fastio;
    long long t,n,i,j,mn,cur;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                mn=a[i];
                for(j=1;j<n;j++)
                {
                    mn+=max(0LL,a[j]-b[j-1]);
                }
                cur=mn;
            }
            else
            {
                cur=cur-a[(i+n-1)%n];
                if(a[i]>b[(i+n-1)%n])
                    cur+=b[(i+n-1)%n];
                else
                    cur+=a[i];
                if(a[(i-1+n)%n]>b[(i-2+n)%n])
                    cur+=a[(i-1+n)%n]-b[(i-2+n)%n];
                mn=min(mn,cur);
            }
            //cout<<cur<<"\n";
        }
        cout<<mn<<"\n";
    }
    return 0;
}
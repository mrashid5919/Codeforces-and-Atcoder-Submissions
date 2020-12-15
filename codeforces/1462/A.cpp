#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,low,high,b[305];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        low=0;
        high=n-1;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                cout<<b[low]<<" ";
                low++;
            }
            else
            {
                cout<<b[high]<<" ";
                high--;
            }
        }
        cout<<"\n";
    }
    return 0;
}

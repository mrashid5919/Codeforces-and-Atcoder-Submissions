#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<1<<"\n";
        else if(n%2==1)
            cout<<"-1\n";
        else
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                    cout<<n-i<<" ";
                else
                    cout<<i<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

//Incomplete
#include <bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,t;
    static long long ara[100003];

        cin>>n;
        for(i=0; i<n; i++)
            cin>>ara[i];
        if(n<3)
        {
            cout<<0<<"\n";
            for(i=0; i<n; i++)
                cout<<ara[i]<<" ";
            cout<<"\n";
        }
        else
        {
            if(n%2==0)
                cout<<n/2-1<<"\n";
            else
                cout<<n/2<<"\n";
            sort(ara,ara+n);
            for(i=0; i<n; i++)
            {
                if(i%2==0)
                    cout<<ara[n-(1+i/2)]<<" ";
                else
                    cout<<ara[i/2]<<" ";
            }
        }
        return 0;
}

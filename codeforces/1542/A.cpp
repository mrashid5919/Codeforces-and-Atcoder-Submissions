#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,ara[200],even,odd;
    cin>>t;
    while(t--)
    {
        cin>>n;
        even=0;
        odd=0;
        for(i=0;i<2*n;i++)
        {
            cin>>ara[i];
            if(ara[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even==n && odd==n)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}

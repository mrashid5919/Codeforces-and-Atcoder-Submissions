#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,a,b,mn,i,j,p=0;
    cin>>n>>a>>b;
    if(6*n<=a*b)
    {
        cout<<a*b<<"\n";
        cout<<a<<" "<<b<<"\n";
    }
    else
    {
        for(i=6*n;;i++)
        {
            for(j=max(1LL,min(a,b));j*j<=i;j++)
            {
                if(i%j==0 && min(a,b)<=j && max(a,b)<=i/j)
                {
                    cout<<i<<"\n";
                    if(min(a,b)==a)
                        cout<<j<<" "<<i/j<<"\n";
                    else
                        cout<<i/j<<" "<<j<<"\n";
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
    }
    return 0;
}
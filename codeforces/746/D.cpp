#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,k,a,b,i,j;
    cin>>n>>k>>a>>b;
    if(max(a,b)>k*(min(a,b)+1))
    {
        cout<<"NO\n";
        return 0;
    }
    if(a==b)
    {
        for(i=0;i<n;i++)
        {
            if(i%2==0)
                cout<<'B';
            else
                cout<<'G';
        }
    }
    else if(a>b)
    {
        for(i=1;i<=b+1;i++)
        {
            for(j=1;j<=a/(b+1);j++)
                cout<<'G';
            if(i<=a%(b+1))
                cout<<'G';
            if(i<=b)
                cout<<'B';
        }
    }
    else
    {
        for(i=1;i<=a+1;i++)
        {
            for(j=1;j<=b/(a+1);j++)
                cout<<'B';
            if(i<=b%(a+1))
                cout<<'B';
            if(i<=a)
                cout<<'G';
        }
    }
    return 0;
}

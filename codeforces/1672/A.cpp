#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,ara[100],sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        if((sum-n)%2==0)
            cout<<"maomao90"<<"\n";
        else
            cout<<"errorgorn"<<"\n";
    }
    return 0;
}

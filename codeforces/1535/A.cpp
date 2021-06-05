#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,i,ara[10],arr[10],a,b;
    cin>>t;
    while(t--)
    {
        for(i=0;i<4;i++)
        {
            cin>>ara[i];
            arr[i]=ara[i];
        }
        sort(arr,arr+4,greater<long long>());
        a=max(ara[0],ara[1]);
        b=max(ara[2],ara[3]);
        if((a==arr[0] && b==arr[1]) || (a==arr[1] && b==arr[0]))
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}

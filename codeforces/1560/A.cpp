#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long i,ara[10005],count=0;
    for(i=1;; i++)
    {
        if(count==1000)
            break;
        if(i%3!=0 && i%10!=3)
        {
            count++;
            ara[count]=i;
        }
    }
    long long t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<ara[k]<<"\n";
    }
    return 0;
}

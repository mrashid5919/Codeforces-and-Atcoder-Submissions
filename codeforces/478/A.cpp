#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int ara[10],i,sum=0;
    for(i=0;i<5;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    if(sum<5)
        cout<<-1<<"\n";
    else if(sum%5==0)
        cout<<sum/5<<"\n";
    else
        cout<<-1<<"\n";
    return 0;
}
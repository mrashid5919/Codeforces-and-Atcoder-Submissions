#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,mn=INT_MAX,sum=0;
    string st;
    cin>>n;
    cin>>st;
    for(i=0;i<n;i++)
    {
        if(st[i]=='(')
            sum++;
        else
            sum--;
        mn=min(mn,sum);
    }
    if(mn>=-1 && sum==0)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}

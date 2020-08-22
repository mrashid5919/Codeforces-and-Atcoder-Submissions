#include<bits/stdc++.h>
#include<string>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    long long n,sum=0,i;
    string num;
    cin>>num;
    n=num.size();
    for(i=0;i<n;i++)
        sum=sum+num[i]-'0';
    if(sum%9==0)
        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";
    return 0;
}
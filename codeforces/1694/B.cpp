#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    long long t,n,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        sum=1;
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                sum++;
            else
                sum+=i+1;
        }
        cout<<sum<<"\n";
    }
    return 0;
}

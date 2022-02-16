#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n;
    string s;
    cin>>n;
    while(n!=0)
    {
        if(n%2==0)
        {
            s.append("B");
            n/=2;
        }
        else
        {
            s.append("A");
            n--;
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<"\n";
    return 0;
}

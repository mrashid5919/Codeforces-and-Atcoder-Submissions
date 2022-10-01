#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,x;
    string s;
    cin>>n;
    while(n!=0)
    {
        x=n%16;
        if(x>=10)
            s.push_back((char)('A'+x-10));
        else
            s.push_back((char)('0'+x));
        n/=16;
    }
    reverse(s.begin(),s.end());
    if(s.size()==0)
        cout<<"00";
    else if(s.size()==1)
        cout<<"0"<<s;
    else
        cout<<s;
    return 0;
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,x,i;
    string str;
    cin>>n>>x;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='o')
            x++;
        else if(x>0)
            x--;
    }
    cout<<x<<"\n";
    return 0;
}

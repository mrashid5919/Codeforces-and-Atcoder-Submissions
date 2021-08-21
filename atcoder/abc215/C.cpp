#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string s;
    int k,i;
    cin>>s>>k;
    sort(s.begin(),s.end());
    for(i=1;i<k;i++)
    {
        next_permutation(s.begin(),
                           s.end());
    }
    cout<<s<<"\n";
}

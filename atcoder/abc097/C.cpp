#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    string s;
    int k,i,n,j;
    cin>>s;
    n=s.size();
    cin>>k;
    set<string> st;
    for(i=0;i<n;i++)
    {
        int x=min(5,n-i);
        string tmp;
        for(j=0;j<x;j++)
        {
            tmp.push_back(s[i+j]);
            st.insert(tmp);
        }
    }
    cout<<*next(st.begin(),k-1)<<"\n";
    return 0;
}
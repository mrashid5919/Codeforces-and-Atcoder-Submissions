#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

bool isPalindrome(string st)
{
    bool check=true;
    int x=st.size();
    for(int i=0;i<x/2;i++)
    {
        if(st[i]!=st[x-1-i])
        {
            check=false;
            break;
        }
    }
    return check;
}

int main()
{
    fastio;
    int n,i,j,mx=1;
    string s;
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        string tmp;
        for(int j=i;j<n;j++)
        {
            tmp.push_back(s[j]);
            if(isPalindrome(tmp))
                mx=max(mx,j-i+1);
        }
    }
    cout<<mx<<"\n";
    return 0;
}
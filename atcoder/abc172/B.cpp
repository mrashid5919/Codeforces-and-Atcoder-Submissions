#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    int i,n,count=0;
    cin>>s>>t;
    n=s.length();
    for(i=0;i<n;i++)
    {
        if(s[i]!=t[i])
            count++;
    }
    cout<<count;
    return 0;
}
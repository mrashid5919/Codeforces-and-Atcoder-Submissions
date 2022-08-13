#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;
    long long n,i,cnt=0,a=0;
    cin>>s;
    n=s.size();
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='A')
            a++;
        if((s[i]=='B' && s[i+1]!='C') || s[i]=='C')
            a=0;
        if(s[i]=='B' && s[i+1]=='C')
        {
            cnt+=a;
            i++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}

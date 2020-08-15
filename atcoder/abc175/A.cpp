#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str;
    int i,r=0;
    cin>>str;
    for(i=0;i<3;i++)
    {
        if(str[i]=='R')
            r++;
    }
    if(r==2)
    {
        if(str[0]=='R' && str[2]=='R')
            cout<<1;
        else
            cout<<2;
    }
    else
        cout<<r;
    return 0;
}

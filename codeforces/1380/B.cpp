//Incomplete
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    long long t,n,i,r,p,sc,ara[4],max;
    string s,b;
    cin>>t;
    while(t--)
    {
        r=0;
        p=0;
        sc=0;
        cin>>s;
        n=s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='R')
                r++;
            else if(s[i]=='P')
                p++;
            else
                sc++;
        }
        ara[0]=r;
        ara[1]=p;
        ara[2]=sc;
        for(i=0;i<3;i++)
        {
            if(i==0)
                max=ara[i];
            else if(ara[i]>max)
                max=ara[i];
        }
        if(max==r)
        {
            for(i=0;i<n;i++)
                cout<<"P";
        }
        else if(max==p)
        {
            for(i=0;i<n;i++)
                cout<<"S";
        }
        else
        {
            for(i=0;i<n;i++)
                cout<<"R";
        }
        cout<<endl;
    }
    return 0;
}

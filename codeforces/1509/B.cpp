#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,p,ct,cm;
    string st;
    cin>>t;
    while(t--)
    {
        p=0;
        ct=0;
        cm=0;
        cin>>n;
        cin>>st;
        for(i=0;i<n;i++)
        {
            if(st[i]=='T')
                ct++;
            else
                cm++;
            if(cm>ct)
            {
                p=1;
                break;
            }
        }
        ct=0;
        cm=0;
        for(i=n-1;i>=0;i--)
        {
            if(st[i]=='T')
                ct++;
            else
                cm++;
            if(cm>ct)
            {
                p=1;
                break;
            }
        }
        if(p==0 && cm==n/3)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}

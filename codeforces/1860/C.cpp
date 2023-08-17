#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[300005];

int main()
{
    fastio;
    int t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        cnt=0;
        int l0=-1,l1=-1;
        //set<int> l0,l1;
        //set<int>::iterator it0,it1;
        for(i=0;i<n;i++)
        {
            if(l0==-1 && l1==-1)
                l0=ara[i];
            else if(l1==-1)
            {
                if(l0>ara[i])
                    l0=ara[i];
                else
                {
                    l1=ara[i];
                    cnt++;
                }
            }
            else
            {
                if(l1>ara[i])
                {
                    if(l0>ara[i])
                        l0=ara[i];
                    else
                    {
                        l1=ara[i];
                        cnt++;
                    }
                }
            }
        }
        cout<<cnt<<"\n";
    }
}
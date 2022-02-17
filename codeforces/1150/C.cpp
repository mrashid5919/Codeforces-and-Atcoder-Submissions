#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,x,ones=0,twos=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
            ones++;
        else
            twos++;
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if(twos>0)
            {
                cout<<2<<" ";
                twos--;
            }
            else
            {
                cout<<1<<" ";
                ones--;
            }
        }
        else if(i==1)
        {
            if(ones>0)
            {
                cout<<1<<" ";
                ones--;
            }
            else
            {
                cout<<2<<" ";
                twos--;
            }
        }
        else if(twos>0)
        {
            cout<<2<<" ";
            twos--;
        }
        else
            cout<<1<<" ";
    }
    return 0;
}

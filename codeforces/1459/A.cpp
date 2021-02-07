#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,r,b;
    string red,blue;
    cin>>t;
    while(t--)
    {
        r=0;
        b=0;
        cin>>n;
        cin>>red;
        cin>>blue;
        for(i=0;i<n;i++)
        {
            if(red[i]==blue[i])
            {
                r++;
                b++;
            }
            else if(red[i]>blue[i])
                r++;
            else
                b++;
        }
        if(r>b)
            cout<<"RED"<<"\n";
        else if(b>r)
            cout<<"BLUE"<<"\n";
        else
            cout<<"EQUAL"<<"\n";
    }
    return 0;
}

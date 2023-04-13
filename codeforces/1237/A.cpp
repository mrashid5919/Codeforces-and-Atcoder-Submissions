#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,x,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
            cout<<x/2<<"\n";
        else
        {
            if(s==0)
            {
                if(x>0)
                {
                    s=1;
                    cout<<x/2<<"\n";
                }
                else
                {
                    s=1;
                    cout<<x/2-1<<"\n";
                }
            }
            else
            {
                if(x>0)
                {
                    s=0;
                    cout<<x/2+1<<"\n";
                }
                else
                {
                    s=0;
                    cout<<x/2<<"\n";
                }
            }
        }
    }
    return 0;
}

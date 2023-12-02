#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,s,m,l,i,j,k,mn=0;
    cin>>n>>s>>m>>l;
    for(i=0;;i+=6)
    {
        if(i>=n)
        {
            if(mn==0)
                mn=(s*i)/6;
            else
                mn=min(mn,(s*i)/6);
            break;
        }
        for(j=0;;j+=8)
        {
            if(i+j>=n)
            {
                if(mn==0)
                    mn=(s*i)/6+(m*j)/8;
                else
                    mn=min(mn,(s*i)/6+(m*j)/8);
                break;
            }
            for(k=0;;k+=12)
            {
                if(i+j+k>=n)
                {
                    if(mn==0)
                        mn=(s*i)/6+(m*j)/8+(l*k)/12;
                    else
                        mn=min(mn,(s*i)/6+(m*j)/8+(l*k)/12);
                    break;
                }
            }
        }
    }
    cout<<mn<<"\n";
    return 0;
}
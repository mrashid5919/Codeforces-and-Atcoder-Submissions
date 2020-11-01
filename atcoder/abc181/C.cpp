#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,j,k,x[103],y[103],p=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if((y[j]-y[i])*(x[k]-x[j])==(y[k]-y[j])*(x[j]-x[i]))
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==1)
            break;
    }
    if(p==1)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

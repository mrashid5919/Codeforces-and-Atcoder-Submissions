#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,mex=0,j;
    static int p[200003],c[200003];
    for(i=0;i<=200001;i++)
        c[i]=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>p[i];
    for(i=0;i<n;i++)
    {
        c[p[i]]++;
        if(p[i]!=mex)
            cout<<mex<<"\n";
        else
        {
            for(j=mex+1;j<=200001;j++)
            {
                if(c[j]==0)
                {
                    mex=j;
                    cout<<mex<<"\n";
                    break;
                }
            }
        }
    }
    return 0;
}

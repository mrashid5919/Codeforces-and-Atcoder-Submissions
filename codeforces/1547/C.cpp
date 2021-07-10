#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,k,n,m,i,a[500],b[500],x,y,p,c,ans[1000];
    cin>>t;
    while(t--)
    {
        x=0;
        y=0;
        p=1;
        c=0;
        cin>>k>>n>>m;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
        while(x<n || y<m)
        {
            //cout<<c<<"\n";
            /*if(a[x]>k && b[y]>k && x<m && y<n)
            {
                p=0;
                break;
            }*/
            if(p==1)
            {
                if(a[x]<=k && x<n)
                {
                    if(a[x]==0)
                        k++;
                    ans[c]=a[x];
                    //cout<<ans[c]<<"\n";
                    c++;
                    x++;
                }
                else if((b[y]>k && y<m) || y==m)
                {
                    p=0;
                    break;
                }
                else
                {
                    p=2;
                    continue;
                }
            }
            else
            {
                if(b[y]<=k && y<m)
                {
                    if(b[y]==0)
                        k++;
                    ans[c]=b[y];
                    //cout<<ans[c]<<"\n";
                    c++;
                    y++;
                }
                else if((a[x]>k && x<n) || x==n)
                {
                    p=0;
                    break;
                }
                else
                {
                    p=1;
                    continue;
                }
            }
        }
        if(p==0)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=0;i<n+m;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

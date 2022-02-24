#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,j,ara[105],ze=0,on=0,z[105][105],o[105][105],mx=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==0)
            ze++;
        else
            on++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(j==i)
                o[i][j]=ara[j];
            else
                o[i][j]=o[i][j-1]+ara[j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(j==i)
                z[i][j]=1-ara[j];
            else
                z[i][j]=z[i][j-1]+1-ara[j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int temp=on-o[i][j]+z[i][j];
            mx=max(mx,temp);
        }
    }
    cout<<mx<<"\n";
    return 0;
}

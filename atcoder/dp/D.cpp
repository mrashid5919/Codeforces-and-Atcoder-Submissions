#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,weight,i,j;
    static unsigned long long int w[103],v[103],t[100002][103];
    cin>>n>>weight;
    for(i=0;i<n;i++)
        cin>>w[i]>>v[i];
    for(i=0;i<=weight;i++)
        t[i][0]=0;
    for(i=0;i<=weight;i++)
        t[0][i]=0;
    for(i=1;i<=weight;i++)
    {
        for(j=1;j<=n;j++)
        {
            t[i][j]=t[i][j-1];
            if(i>=w[j-1])
            {
                t[i][j]=max(t[i][j-1],t[i-w[j-1]][j-1]+v[j-1]);
            }
        }
    }
    cout<<t[weight][n]<<endl;
    return 0;
}

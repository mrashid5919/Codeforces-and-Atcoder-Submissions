#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,ara[105][105],count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=1;
        if(n==2)
        {
            cout<<-1<<"\n";
            continue;
        }

        for(i=0; i<n*n; i=i+2)
        {
            ara[i/n][i%n]=count;
            count++;
        }
        for(i=1; i<n*n; i=i+2)
        {
            ara[i/n][i%n]=count;
            count++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<ara[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}

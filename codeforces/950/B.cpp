#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[100005],b[100005];

int main()
{
    fastio;
    long long n,m,i,j,co=0,sm1=0,sm2=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    i=0;
    j=0;
    while(i!=n || j!=m)
    {
        if(sm1<=sm2 && i<n)
        {
            sm1+=a[i];
            i++;
        }
        else if(sm2<sm1 && j<m)
        {
            sm2+=b[j];
            j++;
        }
        if(sm1==sm2 && sm1!=0)
        {
            co++;
            sm1=0;
            sm2=0;
        }
    }
    if(sm1!=0)
        co++;
    cout<<co<<"\n";
    return 0;
}

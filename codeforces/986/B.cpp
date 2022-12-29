#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[1000005],mp1[1000005],mp2[1000005];

int main()
{
    fastio;
    long long n,i,cnt=0,temp1,temp2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
        mp1[i]=ara[i]; //storing what ith index of the array currently contains
        mp2[ara[i]]=i; //storing where the ith element of array is currently located
    }
    for(i=1;i<=n;i++)
    {
        if(mp1[i]==i)
            continue;
        temp1=mp2[i];
        mp1[temp1]=mp1[i];
        mp2[mp1[i]]=temp1;
        mp1[i]=i;
        mp2[i]=i;
        cnt++;
    }
    if(cnt%2==n%2)
        cout<<"Petr\n";
    else
        cout<<"Um_nik\n";
    return 0;
}

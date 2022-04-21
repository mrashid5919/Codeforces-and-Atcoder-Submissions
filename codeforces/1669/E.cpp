#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,sum,ara[20][20],temp;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0;
        for(i=0;i<=10;i++)
        {
            for(j=0;j<=10;j++)
                ara[i][j]=0;
        }
        cin>>n;
        while(n--)
        {
            cin>>s;
            ara[s[0]-'a'][s[1]-'a']++;
        }
        for(i=0;i<=10;i++)
        {
            temp=0;
            for(j=0;j<=10;j++)
                temp+=ara[i][j];
            for(j=0;j<=10;j++)
                sum+=(temp-ara[i][j])*ara[i][j];
        }
        for(i=0;i<=10;i++)
        {
            temp=0;
            for(j=0;j<=10;j++)
                temp+=ara[j][i];
            for(j=0;j<=10;j++)
                sum+=(temp-ara[j][i])*ara[j][i];
        }
        cout<<sum/2<<"\n";
    }
    return 0;
}

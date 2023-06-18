#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,i,pos,neg,ara[105];
    cin>>t;
    while(t--)
    {
        cin>>n;
        pos=0;
        neg=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==1)
                pos++;
            else
                neg++;
        }
        if(pos>=neg)
        {
            cout<<neg%2<<"\n";
        }
        else
        {
            int cnt=(neg-pos)/2+(neg-pos)%2;
            neg-=cnt;
            if(neg%2)
                cnt++;
            cout<<cnt<<"\n";
        }
    }
    return 0;
}

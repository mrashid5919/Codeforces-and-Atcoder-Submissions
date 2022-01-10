#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((c-a)%2==0 && b<=a+(c-a)/2 && (a+(c-a)/2)%b==0 && (a+(c-a)/2)>0)
            cout<<"YES"<<"\n";
        else if(a<=2*b-c && 2*b-c>0 && (2*b-c)%a==0)
            cout<<"YES"<<"\n";
        else if(c<=2*b-a && 2*b-a>0 && (2*b-a)%c==0)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}

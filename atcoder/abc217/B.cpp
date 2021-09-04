#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    string a,b,c;
    int be=0,g=0,h=0,r=0;
    cin>>a>>b>>c;
    if(a[1]=='B' || b[1]=='B' || c[1]=='B')
        be++;
    if(a[1]=='G' || b[1]=='G' || c[1]=='G')
        g++;
    if(a[1]=='H' || b[1]=='H' || c[1]=='H')
        h++;
    if(a[1]=='R' || b[1]=='R' || c[1]=='R')
        r++;
    if(be==0)
        cout<<"ABC"<<"\n";
    else if(g==0)
        cout<<"AGC"<<"\n";
    else if(h==0)
        cout<<"AHC"<<"\n";
    else
        cout<<"ARC"<<"\n";
    return 0;
}

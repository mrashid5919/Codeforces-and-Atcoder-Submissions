#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int m,h;
    cin>>m>>h;
    if(h%m==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
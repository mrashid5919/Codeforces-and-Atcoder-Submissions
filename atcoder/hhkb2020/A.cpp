#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    char s,t;
    cin>>s>>t;
    if(s=='Y')
        printf("%c",t-32);
    else
        printf("%c",t);
    return 0;
}

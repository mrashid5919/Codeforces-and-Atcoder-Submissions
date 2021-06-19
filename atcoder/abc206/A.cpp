#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,ans;
    cin>>n;
    ans=(n*108)/100;
    if(ans<206)
        cout<<"Yay!"<<"\n";
    else if(ans==206)
        cout<<"so-so"<<"\n";
    else
        cout<<":("<<"\n";
    return 0;
}

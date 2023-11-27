#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<long long> pr;

int main()
{
    fastio;
    long long n,k,i;
    cin>>n>>k;
    pr.push_back(1LL);
    for(i=1;;i++)
    {
        pr.push_back(pr[i-1]*2);
        if(pr[i]>n)
            break;
    }
    if(k==1)
        cout<<n<<"\n";
    else
        cout<<pr[pr.size()-1]-1<<"\n";
    return 0;
}
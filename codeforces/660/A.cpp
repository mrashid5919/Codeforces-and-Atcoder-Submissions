#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,i,ara[1005],cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    vector<long long> vect;
    for(i=0;i<n-1;i++)
    {
        vect.push_back(ara[i]);
        if(__gcd(ara[i],ara[i+1])!=1)
        {
            cnt++;
            vect.push_back(1LL);
        }
    }
    vect.push_back(ara[n-1]);
    cout<<cnt<<"\n";
    for(i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
    return 0;
}

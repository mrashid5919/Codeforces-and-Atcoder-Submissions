#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    long long n,k,i,x,sum;
    cin>>n;
    cin>>k;
    sum=0;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=min(abs(k-x),x);
    }
    cout<<2*sum<<"\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long a[100005],b[100005];

int main() {
    long long n,i;
    vector<pair<long long,long long> > vect;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        vect.push_back(make_pair(a[i],b[i]));
    }
    sort(vect.begin(),vect.end());
    cout<<vect[n-1].first+vect[n-1].second<<"\n";
    return 0;
}

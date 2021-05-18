#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int n,i,t[1005];
    string s[1005];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i]>>t[i];
    vector< pair <int,string> > vect;
    for (i=0; i<n; i++)
        vect.push_back( make_pair(t[i],s[i]) );
    sort(vect.begin(),vect.end());
    cout<<vect[n-2].second<<"\n";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,k,i;
    cin>>a>>b>>k;
    set<long long, greater<long long> > s1;
    for(i=0;i<k;i++){
        if(a+i>b)
            break;
        s1.insert(a+i);
    }
    for(i=0;i<k;i++){
        if(b-i<a)
            break;
        s1.insert(b-i);
    }
    set<long long> s2(s1.begin(), s1.end());
    set<long long, greater<long long> >::iterator itr;
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << "\n";
    }
    return 0;
}

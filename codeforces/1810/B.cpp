#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<long long> vect;
        while(n!=1)
        {
            if((n/2)%2==0)
            {
                vect.push_back(1LL);
                n=1+n/2;
            }
            else
            {
                vect.push_back(2LL);
                n/=2;
            }
        }
        cout<<vect.size()<<"\n";
        for(i=vect.size()-1;i>=0;i--)
            cout<<vect[i]<<" ";
        cout<<"\n";
    }
    return 0;
}

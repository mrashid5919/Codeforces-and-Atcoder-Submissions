//Looked editorial
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long x[100005],tim[100005];

int main()
{
    fastio;
    long long t,n,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        vector<long long> vect;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>tim[i];
        }
        for(i=0;i<n;i++)
        {
            vect.push_back(x[i]+tim[i]);
            vect.push_back(x[i]-tim[i]);
        }
        sort(vect.begin(),vect.end());
        sum=vect[0]+vect[2*n-1];
        if(sum%2==0)
            cout<<sum/2<<"\n";
        else
            cout<<sum/2<<".5\n";
    }
    return 0;
}

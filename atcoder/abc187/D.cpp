//Took help
#include<bits/stdc++.h>
#include<string>
using namespace std;

long long a[200005],b[200005];

int main()
{
    long long n,i,x=0,cnt=0;
    vector<long long> vect;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        x-=a[i];
        vect.push_back(2*a[i]+b[i]);
    }
    sort(vect.begin(),vect.end());
    for(i=n-1;i>=0;i--)
    {
        if(x>0)
            break;
        x+=vect[i];
        //cout<<x<<"\n";
        cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}

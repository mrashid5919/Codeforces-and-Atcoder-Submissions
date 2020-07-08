#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double sum=0.0,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p=(double)1/(double)i;
        sum=sum+p;
    }
    cout<<setprecision(10)<<sum<<endl;
    return 0;
}

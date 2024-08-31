// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int l=0,r=0,n,i,x,sum=0;
    char op;
    cin>>n;
    while(n--)
    {
        cin>>x>>op;
        if(op=='L')
        {
            if(l==0)
                l=x;
            else
            {
                sum+=abs(l-x);
                l=x;
            }
        }
        else if(r==0)
            r=x;
        else
        {
            sum+=abs(r-x);
            r=x;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
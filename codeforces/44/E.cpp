#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,a,b,i,n,x,c[300],sum;
    string s;
    cin>>k>>a>>b;
    cin>>s;
    n=s.size();
    if(n<k*a || n>k*b)
        cout<<"No solution\n";
    else
    {
        x=n/k;
        if((b-x)*k<n%k)
            cout<<"No solution\n";
        else
        {
            for(i=0;i<k;i++)
                c[i]=x;
            sum=x*k;
            for(i=0;i<k;i++)
            {
                if(sum+b-x>=n)
                {
                    c[i]+=n-sum;
                    break;
                }
                else
                {
                    c[i]=b;
                    sum+=b-x;
                }
            }
            for(i=1;i<k;i++)
                c[i]+=c[i-1];
            int st=0;
            for(i=0;i<n;i++)
            {
                if(i==c[st])
                {
                    cout<<"\n";
                    st++;
                }
                cout<<s[i]; 
            }
        }
    }
    return 0;
}
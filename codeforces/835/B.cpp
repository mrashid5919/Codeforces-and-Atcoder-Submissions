// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    string n;
    long long k,i,dif,sum=0,x=0;
    cin>>k;
    cin>>n;
    for(i=0;i<n.size();i++)
        sum+=n[i]-'0';
    if(sum>=k)
        cout<<0<<"\n";
    else
    {
        dif=k-sum;
        sort(n.begin(),n.end());
        
        
            for(i=0;i<n.size();i++)
            {
                if(x+('9'-n[i])>=dif)
                {
                    cout<<i+1<<"\n";
                    break;
                }
                else
                    x+='9'-n[i];
            }
    }
    return 0;
}
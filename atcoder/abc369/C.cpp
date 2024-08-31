// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

long long ara[200005];

int main() {
    // Write C++ code here
    long long n,i,cnt=0,cur=1,dif;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    if(n==1)
    {
        cout<<1<<"\n";
        return 0;
    }
    for(i=1;i<n;i++)
    {
        if(i==1)
        {
            dif=ara[i]-ara[i-1];
            cur++;
        }
        else
        {
            if(ara[i]-ara[i-1]==dif)
                cur++;
            else
            {
                if(cnt>0)
                    cnt--;
                cnt+=(cur*(cur+1))/2;
                cur=2;
                dif=ara[i]-ara[i-1];
            }
        }
        if(i==n-1){
            if(cnt>0)
                cnt--;
            cnt+=(cur*(cur+1))/2;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
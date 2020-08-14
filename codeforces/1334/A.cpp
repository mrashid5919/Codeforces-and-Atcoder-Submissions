#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,a[1003],b[1003],p;
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i]>>b[i];
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                if(b[i]>a[i])
                {
                    p=1;
                    break;
                }
            }
            else
            {
                if(a[i]<a[i-1] || b[i]<b[i-1])
                {
                    p=1;
                    break;
                }
                if(b[i]>a[i])
                {
                    p=1;
                    break;
                }
                if(b[i]-b[i-1]>a[i]-a[i-1])
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,i,j,cnt=0;
    cin>>n>>k;
    if(k>(n*n)/2+(n*n)%2)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i+j)%2==0)
                {
                    if(cnt<k)
                    {
                        cout<<"L";
                        cnt++;
                    }
                    else
                        cout<<"S";
                }
                else
                    cout<<"S";
            }
            cout<<"\n";
        }
    }
    return 0;
}

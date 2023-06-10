// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long h,w,i,j,cnt,p=0;
    char ara[505][505];
    cin>>h>>w;
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(ara[i][j]=='.')
            {
                cnt=0;
                if(i>0)
                {
                    if(ara[i-1][j]=='#')
                        cnt++;
                }
                if(i<h-1)
                {
                    if(ara[i+1][j]=='#')
                        cnt++;
                }
                if(j>0)
                {
                    if(ara[i][j-1]=='#')
                        cnt++;
                }
                if(j<w-1)
                {
                    if(ara[i][j+1]=='#')
                        cnt++;
                }
                if(cnt>=2)
                {
                    p=1;
                    cout<<i+1<<" "<<j+1<<"\n";
                    break;
                }
            }
        }
        if(p==1)
            break;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n,x,i,j,k,cnt,dist,it;
    cin>>t;
    while(t--)
    {
        it=0;
        cin>>n>>x;
        cnt=0;
        for(i=1;i<=x/3,3*i*i<=n;i++)
        {
            for(j=i;;j++)
            {
                if(i+2*j>x || 2*i*j+j*j>n){
                    break;
                }
                for(k=j;;k++)
                {
                    it++;
                    if(i+j+k>x || i*j+j*k+k*i>n)
                        break;
                    //cout<<i<<" "<<j<<" "<<k<<"\n";
                    dist=1;
                    if(j!=i)
                        dist++;
                    if(k!=i && k!=j)
                        dist++;
                    if(dist==1)
                        cnt++;
                    else if(dist==2)
                        cnt+=3;
                    else
                        cnt+=6;
                }
            }
        }
        //cout<<it<<"\n";
        cout<<cnt<<"\n";
    }
    return 0;
}
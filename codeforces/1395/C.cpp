//Took help from editorial
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,i,j,a[205],b[205],c=0,count,mask;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(mask=0;mask<(1<<9);mask++)
    {
        count=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                c=a[i]&b[j];
                if((c&mask)==c)
                {
                    count++;
                    break;
                }
            }
        }
        if(count==n)
        {
            cout<<mask<<"\n";
            break;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,j,k,count1=0,count2=999,count3=0,count=0;
    long long a[10005],b[10005],c[10005];
    for(i=2;i<=1000;i++)
        b[i-2]=10*i;
    for(i=2;;i++)
    {
        if(6*i>10000)
            break;
        if(i%5==0)
            continue;
        a[count1]=6*i;
        count1++;
    }
    for(i=3;;i=i+2)
    {
        if(15*i>10000)
            break;
        c[count3]=15*i;
        count3++;
    }
    cin>>n;
    cout<<6<<" "<<10<<" "<<15<<" ";
    count=3;
    i=0;
    j=0;
    k=0;
    while(count<n)
    {
        if(i<count1)
        {
            cout<<a[i]<<" ";
            i++;
            count++;
        }
        else if(j<count2)
        {
            cout<<b[j]<<" ";
            j++;
            count++;
        }
        else
        {
            cout<<c[k]<<" ";
            k++;
            count++;
        }
    }
    return 0;
}

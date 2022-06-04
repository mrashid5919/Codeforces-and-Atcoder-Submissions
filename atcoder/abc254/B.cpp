#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
 	fastio;
  	long long n,i,j,ara[50],a,b;
  	cin>>n;
  	cout<<1<<"\n";
  	for(i=1;i<n;i++)
    {
      	cout<<1<<" ";
      	ara[0]=1;
      	for(j=1;j<=i;j++)
        {
          	if(j<=i-j)
            {
              	a=i-j+1;
              	b=j;
              	ara[j]=(ara[j-1]*a)/b;
              	cout<<ara[j]<<" ";
            }
          	else
            {
              	cout<<ara[i-j]<<" ";
            }
        }
      	cout<<"\n";
    }
  	return 0;
}
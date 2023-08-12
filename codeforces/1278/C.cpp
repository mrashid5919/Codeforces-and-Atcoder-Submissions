#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[200005],redl[100005],bluel[100005],redr[100005],bluer[100005];

int main()
{
	fastio;
	int t,n,i,mn,p;
	cin>>t;
	while(t--)
	{
		cin>>n;
		mn=2*n;
		for(i=1;i<=2*n;i++)
			cin>>ara[i];
		map<int,int> difl,difr;
		for(i=1;i<=n;i++)
		{
			if(i==1)
			{
				if(ara[i]==1)
				{
					redl[i]=1;
					bluel[i]=0;
				}
					
				else
				{
					redl[i]=0;
					bluel[i]=1;
				}
			}
			else if(ara[i]==1)
			{
				redl[i]=redl[i-1]+1;
				bluel[i]=bluel[i-1];
			}
			else
			{
				bluel[i]=bluel[i-1]+1;
				redl[i]=redl[i-1];
			}
			//cout<<redl[i]-bluel[i]<<"\n";
			//if(difl[redl[i]-bluel[i]]==0)
				difl[redl[i]-bluel[i]]=i;
		}
		for(i=1;i<=n;i++)
		{
			if(i==1)
			{
				if(ara[2*n]==1)
				{
					redr[i]=1;
					bluer[i]=0;
				}
					
				else
				{
					redr[i]=0;
					bluer[i]=1;
				}
			}
			else if(ara[2*n+1-i]==1)
			{
				redr[i]=redr[i-1]+1;
				bluer[i]=bluer[i-1];
			}
			else
			{
				bluer[i]=bluer[i-1]+1;
				redr[i]=redr[i-1];
			}
			//cout<<redr[i]-bluer[i]<<"\n";
			//if(difr[redr[i]-bluer[i]]==0)
				difr[redr[i]-bluer[i]]=i;
		}
		for(i=1;i<=n;i++)
		{
			if(redl[i]==bluel[i] || redr[i]==bluer[i])
				mn=min(mn,2*n-i);
			if(difr[bluel[i]-redl[i]])
				mn=min(mn,n-i+n-difr[bluel[i]-redl[i]]);
			if(difl[bluer[i]-redr[i]])
				mn=min(mn,n-i+n-difl[bluer[i]-redr[i]]);
			//cout<<mn<<"\n";
		}
		cout<<mn<<"\n";
	}
	return 0;
}
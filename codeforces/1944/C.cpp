#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[200006],cnt[200006];

int main()
{
	fastio;
	int t,n,i,p;
	cin>>t;
	while(t--)
	{
		p=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>ara[i];
			cnt[i]=0;
		}
		cnt[n]=0;
		for(i=0;i<n;i++)
			cnt[ara[i]]++;
		if(cnt[0]==0)
		{
			cout<<0<<"\n";
			continue;
		}
		for(i=1;i<=n;i++)
		{
			if(cnt[i]==0)
			{
				cout<<i<<"\n";
				break;
			}
			if(cnt[i]==1)
			{
				if(cnt[0]==1)
				{
					cout<<i<<"\n";
					break;
				}
				if(p==0)
					p=1;
				else
				{
					cout<<i<<"\n";
					break;
				}
			}
		}
	}
	return 0;
}
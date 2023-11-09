#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,nr,ng,nb,i,j,mn,x;
    cin>>t;
    while(t--)
    {
        mn=2000000000000000000;
        cin>>nr>>ng>>nb;
        vector<long long> r,g,b;
        for(i=0;i<nr;i++)
        {
            cin>>x;
            r.push_back(x);
        }
        for(i=0;i<ng;i++)
        {
            cin>>x;
            g.push_back(x);
        }
        for(i=0;i<nb;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        sort(r.begin(),r.end());
        sort(g.begin(),g.end());
        sort(b.begin(),b.end());
        vector<long long>::iterator it1,it2;
        for(i=0;i<nr;i++)
        {
            long long gg[5]={-1,-1,-1},bb[5]={-1,-1,-1},p,q,mnn;
            it1=lower_bound(g.begin(),g.end(),r[i]);
            if(it1==g.end())
                gg[0]=g[ng-1];
            else if(it1==g.begin())
            {
                gg[0]=g[0];
            }
            else
            {
                long long idx=it1-g.begin();
                gg[0]=g[idx];
                gg[1]=g[idx-1];
                if(idx!=ng-1)
                    gg[2]=g[idx+1];
            }
            //cout<<gg[0]<<"\n";
            for(j=0;j<3;j++)
            {
                if(gg[j]!=-1)
                {
                    if(j==0)
                    {
                        p=gg[j];
                        mnn=abs(p-r[i]);
                    }
                    else if(abs(gg[j]-r[i])<mnn)
                    {
                        p=gg[j];
                        mnn=abs(gg[j]-r[i]);
                    }
                }
            }

            it2=lower_bound(b.begin(),b.end(),r[i]);
            if(it2==b.end())
                bb[0]=b[nb-1];
            else if(it2==b.begin())
            {
                bb[0]=b[0];
            }
            else
            {
                long long idx=it2-b.begin();
                bb[0]=b[idx];
                bb[1]=b[idx-1];
                if(idx!=nb-1)
                    bb[2]=b[idx+1];
            }
            for(j=0;j<3;j++)
            {
                if(bb[j]!=-1)
                {
                    if(j==0)
                    {
                        q=bb[j];
                        mnn=abs(q-r[i]);
                    }
                    else if(abs(bb[j]-r[i])<mnn)
                    {
                        q=bb[j];
                        mnn=abs(bb[j]-r[i]);
                    }
                }
            }

            //cout<<p<<" "<<q<<"\n";

            mn=min(mn,(p-r[i])*(p-r[i])+(q-r[i])*(q-r[i])+(p-q)*(p-q));
        }
        //cout<<mn<<"\n";

        for(i=0;i<ng;i++)
        {
            long long rr[5]={-1,-1,-1},bb[5]={-1,-1,-1},p,q,mnn;
            it1=lower_bound(r.begin(),r.end(),g[i]);
            if(it1==r.end())
                rr[0]=r[nr-1];
            else if(it1==r.begin())
            {
                rr[0]=r[0];
            }
            else
            {
                long long idx=it1-r.begin();
                rr[0]=r[idx];
                rr[1]=r[idx-1];
                if(idx!=nr-1)
                    rr[2]=r[idx+1];
            }
            for(j=0;j<3;j++)
            {
                if(rr[j]!=-1)
                {
                    if(j==0)
                    {
                        p=rr[j];
                        mnn=abs(p-g[i]);
                    }
                    else if(abs(rr[j]-g[i])<mnn)
                    {
                        p=rr[j];
                        mnn=abs(rr[j]-g[i]);
                    }
                }
            }

            it2=lower_bound(b.begin(),b.end(),g[i]);
            if(it2==b.end())
                bb[0]=b[nb-1];
            else if(it2==b.begin())
            {
                bb[0]=b[0];
            }
            else
            {
                long long idx=it2-b.begin();
                bb[0]=b[idx];
                bb[1]=b[idx-1];
                if(idx!=nb-1)
                    bb[2]=b[idx+1];
            }
            for(j=0;j<3;j++)
            {
                if(bb[j]!=-1)
                {
                    if(j==0)
                    {
                        q=bb[j];
                        mnn=abs(q-g[i]);
                    }
                    else if(abs(bb[j]-g[i])<mnn)
                    {
                        q=bb[j];
                        mnn=abs(bb[j]-g[i]);
                    }
                }
            }

            mn=min(mn,(p-g[i])*(p-g[i])+(q-g[i])*(q-g[i])+(p-q)*(p-q));
        }
        //cout<<mn<<"\n";

        for(i=0;i<nb;i++)
        {
            long long gg[5]={-1,-1,-1},rr[5]={-1,-1,-1},p,q,mnn;
            it1=lower_bound(g.begin(),g.end(),b[i]);
            if(it1==g.end())
                gg[0]=g[ng-1];
            else if(it1==g.begin())
            {
                gg[0]=g[0];
            }
            else
            {
                long long idx=it1-g.begin();
                gg[0]=g[idx];
                gg[1]=g[idx-1];
                if(idx!=ng-1)
                    gg[2]=g[idx+1];
            }
            //cout<<gg[1]<<"\n";
            for(j=0;j<3;j++)
            {
                if(gg[j]!=-1)
                {
                    if(j==0)
                    {
                        p=gg[j];
                        mnn=abs(p-b[i]);
                    }
                    else if(abs(gg[j]-b[i])<mnn)
                    {
                        p=gg[j];
                        mnn=abs(gg[j]-b[i]);
                    }
                }
            }

            it2=lower_bound(r.begin(),r.end(),b[i]);
            if(it2==r.end())
                rr[0]=r[nr-1];
            else if(it2==r.begin())
            {
                rr[0]=r[0];
            }
            else
            {
                long long idx=it2-r.begin();
                rr[0]=r[idx];
                rr[1]=r[idx-1];
                if(idx!=nr-1)
                    rr[2]=r[idx+1];
            }
            for(j=0;j<3;j++)
            {
                if(rr[j]!=-1)
                {
                    if(j==0)
                    {
                        q=rr[j];
                        mnn=abs(q-b[i]);
                    }
                    else if(abs(rr[j]-b[i])<mnn)
                    {
                        q=rr[j];
                        mnn=abs(rr[j]-b[i]);
                    }
                }
            }

            //cout<<p<<" "<<q<<"\n";

            mn=min(mn,(p-b[i])*(p-b[i])+(q-b[i])*(q-b[i])+(p-q)*(p-q));
        }

        cout<<mn<<"\n";
    }
    return 0;
}
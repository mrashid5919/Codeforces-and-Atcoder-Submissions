#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)
// vector<int> primes;

// int ara[2000005]={0};

// void sieve()
// {
    
//     for(int i=2;i*i<=2000000;i++)
//     {
//         if(ara[i]==0)
//         {
//             for(int j=i*i;j<=2000000;j+=i)
//             {
//                 ara[j]=1;
//             }
//         }
        
//     }
//     for(int i=2;i<=2000000;i++)
//     {
//         if(ara[i]==0)
//             primes.push_back(i);
//     }
// }

long long n,a[200005],t[800005],lazy[800005],INF=1000000000000000;

void build(long long v, long long tl, long long tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        long long tm = (tl + tr) / 2;
        build(v*2, tl, tm);
        build(v*2+1, tm+1, tr);
        t[v] = min(t[v*2],t[v*2+1]);
    }
}

void push(long long v) {
    t[v*2] += lazy[v];
    lazy[v*2] += lazy[v];
    t[v*2+1] += lazy[v];
    lazy[v*2+1] += lazy[v];
    lazy[v] = 0;
}

void update(long long v, long long tl, long long tr, long long l, long long r, long long addend) {
    if (l > r) 
        return;
    if (l == tl && tr == r) {
        t[v] += addend;
        lazy[v] += addend;
    } else {
        push(v);
        long long tm = (tl + tr) / 2;
        update(v*2, tl, tm, l, min(r, tm), addend);
        update(v*2+1, tm+1, tr, max(l, tm+1), r, addend);
        t[v] = min(t[v*2], t[v*2+1]);
    }
}

long long query(long long v, long long tl, long long tr, long long l, long long r) {
    if (l > r)
        return INF;
    if (l == tl && tr == r)
        return t[v];
    push(v);
    long long tm = (tl + tr) / 2;
    return min(query(v*2, tl, tm, l, min(r, tm)), 
               query(v*2+1, tm+1, tr, max(l, tm+1), r));
}

int main()
{
    fastio;
    long long n,i,q;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    build(1,0,n-1);
    cin>>q;
    cin.get();
    while(q--)
    {
        long long tmp[3]={0,0,0},sgn=1;
        int x=0;
        string s;
        getline(cin,s);
        for(i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                x++;
            }
            else if(s[i]=='-')
                sgn=-1;
            else
                tmp[x]=(tmp[x]*10)+(s[i]-'0');
        }
        if(x==2)
        {
            tmp[x]=sgn*tmp[x];
            if(tmp[1]<tmp[0])
            {
                update(1,0,n-1,tmp[0],n-1,tmp[2]);
                update(1,0,n-1,0,tmp[1],tmp[2]);
            }
            else
                update(1,0,n-1,tmp[0],tmp[1],tmp[2]);
        }
        else
        {
            if(tmp[1]<tmp[0])
                cout<<min(query(1,0,n-1,tmp[0],n-1),query(1,0,n-1,0,tmp[1]))<<"\n";
            else
                cout<<query(1,0,n-1,tmp[0],tmp[1])<<"\n";
        }            
    }
    return 0;
}
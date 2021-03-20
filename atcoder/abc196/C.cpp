#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long i,count,j,k,l,m,n,x,y,p=0;
    cin>>x;
    if(x>=1e10)
    {
        count=99999;
        for(i=1;i<=9;i++)
        {
            if(p==1)
                break;
            for(j=0;j<=9;j++)
            {
                if(p==1)
                    break;
                for(k=0;k<=9;k++)
                {
                    if(p==1)
                        break;
                    for(l=0;l<=9;l++)
                    {
                        if(p==1)
                            break;
                        for(m=0;m<=9;m++)
                        {
                            if(p==1)
                                break;
                            for(n=0;n<=9;n++)
                            {
                                y=i*(1e11+1e5)+j*(1e10+1e4)+k*(1e9+1e3)+l*(1e8+1e2)+m*(1e7+10)+n*(1e6+1);
                                if(y<=x)
                                    count++;
                                else
                                {
                                    p=1;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if(x>=1e8)
    {
        count=9999;
        for(i=1;i<=9;i++)
        {
            if(p==1)
                break;
            for(j=0;j<=9;j++)
            {
                if(p==1)
                    break;
                for(k=0;k<=9;k++)
                {
                    if(p==1)
                        break;
                    for(l=0;l<=9;l++)
                    {
                        if(p==1)
                            break;
                        for(m=0; m<=9; m++)
                        {

                            y=i*(1e9+1e4)+j*(1e8+1e3)+k*(1e7+1e2)+l*(1e6+10)+m*(1e5+1);
                            if(y<=x)
                                count++;
                            else
                            {
                                p=1;
                                break;
                            }

                        }
                    }
                }
            }
        }
    }
    else if(x>=1e6)
    {
        count=999;
        for(i=1;i<=9;i++)
        {
            if(p==1)
                break;
            for(j=0;j<=9;j++)
            {
                if(p==1)
                    break;
                for(k=0;k<=9;k++)
                {
                    if(p==1)
                        break;
                    for(l=0; l<=9; l++)
                    {
                        y=i*(1e7+1e3)+j*(1e6+1e2)+k*(1e5+10)+l*(1e4+1);
                        if(y<=x)
                            count++;
                        else
                        {
                            p=1;
                            break;
                        }


                    }
                }
            }
        }
    }
    else if(x>=1e4)
    {
        count=99;
        for(i=1;i<=9;i++)
        {
            if(p==1)
                break;
            for(j=0;j<=9;j++)
            {
                if(p==1)
                    break;
                for(k=0; k<=9; k++)
                {
                    y=i*(1e5+1e2)+j*(1e4+10)+k*(1e3+1);
                    if(y<=x)
                        count++;
                    else
                    {
                        p=1;
                        break;
                    }
                }
            }
        }
    }
    else if(x>=100)
    {
        count=9;
        for(i=1;i<=9;i++)
        {
            if(p==1)
                break;
            for(j=0; j<=9; j++)
            {
                y=i*(1e3+10)+j*101;
                if(y<=x)
                    count++;
                else
                {
                    p=1;
                    break;
                }
            }
        }
    }
    else
    {
        count=0;
        for(i=1;i<=9;i++)
        {
            y=i*11;
            if(y<=x)
                count++;
            else
            {
                p=1;
                break;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}

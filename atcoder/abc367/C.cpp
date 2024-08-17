#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,k,r[20],i;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>r[i];
    if(n==1)
    {
        for(i=k;i<=r[0];i+=k)
            cout<<i<<"\n";
    }
    else if(n==2)
    {
        for(int i1=1;i1<=r[0];i1++)
        {
            for(int i2=1;i2<=r[1];i2++)
            {
                if((i1+i2)%k==0)
                {
                    cout<<i1<<" "<<i2<<"\n";
                }
            }
        }
    }
    else if(n==3)
    {
        for(int i1=1;i1<=r[0];i1++)
        {
            for(int i2=1;i2<=r[1];i2++)
            {
                for(int i3=1;i3<=r[2];i3++)
                {
                    if((i1+i2+i3)%k==0)
                    {
                        cout<<i1<<" "<<i2<<" "<<i3<<"\n";
                    }
                }
            }
        }
    }
    else if(n==4)
    {
        for(int i1=1;i1<=r[0];i1++)
        {
            for(int i2=1;i2<=r[1];i2++)
            {
                for(int i3=1;i3<=r[2];i3++)
                {
                    for(int i4=1;i4<=r[3];i4++)
                    {
                        if((i1+i2+i3+i4)%k==0)
                        {
                            cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<"\n";
                        }
                    }
                }
            }
        }
    }
    else if(n==5)
    {
        for(int i1=1;i1<=r[0];i1++)
        {
            for(int i2=1;i2<=r[1];i2++)
            {
                for(int i3=1;i3<=r[2];i3++)
                {
                    for(int i4=1;i4<=r[3];i4++)
                    {
                        for(int i5=1;i5<=r[4];i5++)
                        {
                            if((i1+i2+i3+i4+i5)%k==0)
                            {
                                cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<"\n";
                            }
                        }
                    }
                }
            }
        }
    }
    else if(n==6)
    {
        for(int i1=1;i1<=r[0];i1++)
        {
            for(int i2=1;i2<=r[1];i2++)
            {
                for(int i3=1;i3<=r[2];i3++)
                {
                    for(int i4=1;i4<=r[3];i4++)
                    {
                        for(int i5=1;i5<=r[4];i5++)
                        {
                            for(int i6=1;i6<=r[5];i6++)
                            {
                                if((i1+i2+i3+i4+i5+i6)%k==0)
                                {
                                    cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<" "<<i6<<"\n";
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if(n==7)
    {
        for(int i1=1;i1<=r[0];i1++)
        {
            for(int i2=1;i2<=r[1];i2++)
            {
                for(int i3=1;i3<=r[2];i3++)
                {
                    for(int i4=1;i4<=r[3];i4++)
                    {
                        for(int i5=1;i5<=r[4];i5++)
                        {
                            for(int i6=1;i6<=r[5];i6++)
                            {
                                for(int i7=1;i7<=r[6];i7++)
                                {
                                    if((i1+i2+i3+i4+i5+i6+i7)%k==0)
                                    {
                                        cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<" "<<i6<<" "<<i7<<"\n";
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if(n==8)
    {
        for(int i1=1;i1<=r[0];i1++)
        {
            for(int i2=1;i2<=r[1];i2++)
            {
                for(int i3=1;i3<=r[2];i3++)
                {
                    for(int i4=1;i4<=r[3];i4++)
                    {
                        for(int i5=1;i5<=r[4];i5++)
                        {
                            for(int i6=1;i6<=r[5];i6++)
                            {
                                for(int i7=1;i7<=r[6];i7++)
                                {
                                    for(int i8=1;i8<=r[7];i8++)
                                    {
                                        if((i1+i2+i3+i4+i5+i6+i7+i8)%k==0)
                                        {
                                            cout<<i1<<" "<<i2<<" "<<i3<<" "<<i4<<" "<<i5<<" "<<i6<<" "<<i7<<" "<<i8<<"\n";
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
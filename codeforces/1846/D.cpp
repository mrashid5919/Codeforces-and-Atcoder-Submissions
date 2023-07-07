#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

struct Point {
    double x;
    double y;
};

struct Line {
    double slope;
    double intercept;
};

Line calculateLineEquation(Point point1, Point point2) {
    Line line;

    // Calculate the slope
    line.slope = (point2.y - point1.y) / ((double)point2.x - point1.x);

    // Calculate the y-intercept using point1 and the slope
    line.intercept = point1.y - line.slope * point1.x;

    return line;
}

long long ara[200005];

int main() {
    fastio;
    long long t,n,d,h,i;
    double ans;
    cin>>t;
    while(t--)
    {
        ans=0.0;
        cin>>n>>d>>h;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n-1;i++)
        {
            if(ara[i]+h>ara[i+1])
            {
                Point point1,point2;

                point1.x=0.5*d;
                point1.y=ara[i];
                point2.x=0.0;
                point2.y=ara[i]+h;

                Line line=calculateLineEquation(point1,point2);
                double x=(((double)ara[i+1]-line.intercept)/(double)line.slope)*(ara[i]+h-ara[i+1]);
                ans+=(0.5*d*h);
                ans-=x;
                //cout<<ans<<"\n";
            }
            else
            {
                ans+=(0.5*d*h);
            }
        }
        ans+=(0.5*d*h);
        cout<<setprecision(15)<<ans<<"\n";
    }
    
    return 0;
}

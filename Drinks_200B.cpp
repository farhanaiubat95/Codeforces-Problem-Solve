#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,p,c=0.0,c1=0.0;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        c=c+p;
    }
    c1=c/n;
    cout<<fixed<<setprecision(12)<<c1<<endl;
}










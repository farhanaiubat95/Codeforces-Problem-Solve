#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,c=1;cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
        for(int i=0;i<n-1;i++)
    {
        if(v[i]!=v[i+1] )
        {
            c++;
        }
    }
    cout<<c<<endl;
}







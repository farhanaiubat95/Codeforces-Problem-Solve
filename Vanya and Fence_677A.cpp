#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,c=0,c1=0;
    cin>>n>>h;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
       if(v[i]<=h)
       {
           c++;
       }else{
           c1+=2;
       }
    }
    cout<<c+c1<<endl;

}






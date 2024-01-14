#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t,n,pro=1;
      int a[9];
      cin>>t;
  while(t--)
  {
      cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int ans;
    ans=a[0]+1;
       for(int i=1;i<n;i++)
    {
        ans=ans*a[i];
    }
cout<<ans<<endl;
}
}

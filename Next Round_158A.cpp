#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,c=0,max;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
   for(int i=0;i<n;i++)
  {
      max=a[k-1];
      if(a[i]>=max && a[i]>0)
      {
         cout<<a[i]<<endl;
      }
  }

}

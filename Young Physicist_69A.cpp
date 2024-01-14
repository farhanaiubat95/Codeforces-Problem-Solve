#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,s,sum=0,sum1=0,sum2=0;
   cin>>n;
   int x[n],y[n],z[n];
   for(int i=0;i<n;i++)
   {
       cin>>x[i]>>y[i]>>z[i];
   }
      for(int i=0;i<n;i++)
   {
       sum+=x[i];
       sum1+=y[i];
       sum2+=z[i];
   }
   if(sum==0 && sum1==0 && sum2==0)
   {
       cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
   return 0;
}









#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k,w,n,sum=0;
   cin>>k>>w>>n;
   for(int i=1;i<=n;i++)
   {
     sum=sum+i;
   }
   int d=(k*sum)-w;
   if(d<0)
   {
       cout<<"0"<<endl;
   }
   else{
      cout<<d<<endl;
   }
}









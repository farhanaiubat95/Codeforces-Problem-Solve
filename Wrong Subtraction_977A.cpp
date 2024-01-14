#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,n1,n2;
   cin>>n>>k;
   n1=n;
 if(n>=2)
 {
       while(k--)
   {
        n2=n%10;
         if(n2!=0)
   {
       n--;
   }else{
      n=n/10;
   }
   }
   cout<<n;

 }
}









#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,a,b;
   cin>>n;
   while(n--)
   {
       cin>>a>>b;
       if(a%b==0)
       {
           cout<<"0"<<endl;
       }else if(a%b!=0)
       {
           cout<<b-(a%b)<<endl;
       }
   }


}











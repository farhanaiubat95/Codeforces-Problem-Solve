#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
   string p;
   cin>>p;

   for(int i=0;i<p.size();i++)
   {
       if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
       {
          c=1;
       }
   }
   if(c==1)
   {
       cout<<"YES"<<endl;
   }else
   {
       cout<<"NO"<<endl;
   }
}














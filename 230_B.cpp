#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Number Theory
       int x1[1000000]={0};
       for(int i=2;i<=1000000;i++)
       {
           if(x1[i]==0)
           {
               for(int j=2;i*j<=1000000;j++)
               {
                    x1[i*j]=1;
               }
           }
       }

 int n;
   cin>>n;
long long int x;
long long int sqr;
  for(int i=0;i<n;i++)
       {
       cin>>x;
       sqr= sqrt(x);
       if(x==1)
       {cout<<"NO"<<endl;
       }
       else if(sqr*sqr==x && x1[sqr]==0)
       {
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }
}





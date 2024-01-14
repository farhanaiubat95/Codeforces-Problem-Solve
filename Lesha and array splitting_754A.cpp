#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int sum=0;
   int a[n];
   for(int i=0;i<n;i++)

       cin>>a[i],
       sum+=a[i];

       if(sum!=0)
       {
           cout<<"YES"<<endl;
           cout<<1<<endl;
           cout<<1<<" "<<n <<endl;
       }
       for(int i=0;i<n;i++)
       {
          if(sum!=0)
          {
              cout<<"YES"<<endl;
              cout<<2<<endl;
              cout<<1<<" "<<i+1 <<endl;
              cout<<i+2<<" "<<n <<endl;
          }
       }
       cout<<"NO" <<endl;

}








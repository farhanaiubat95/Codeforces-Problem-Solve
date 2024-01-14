#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   char c[n];
   for(int i=0;i<n;i++)
   {
       cin>>c[i];
   }
     for(int i=0;i<n;i++)
   {
       if(c[i]=='c'|| c[i]=='o'||c[i]=='d'||c[i]=='e'||c[i]=='f'||c[i]=='r'||c[i]=='s')
       {
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }
   }


}



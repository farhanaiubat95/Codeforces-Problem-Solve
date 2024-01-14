#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
   while(n--){
       cin>>s;
       bool k=0;
       if(s.size()%2!=0)
       {
           cout<<"NO"<<endl;
       }else{
           for(int i=0;i<s.size()/2;i++)
           {
               if(s[i]==s[s.size()/2+i])
               {

               }else{
                    k=1;
               }
           }
           if(k==1)
               {
                   cout<<"NO"<<endl;
               }else{
                   cout<<"YES"<<endl;
               }
       }
   }
   }





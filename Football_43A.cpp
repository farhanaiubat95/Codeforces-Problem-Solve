#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,i,j,c=0,max1=0,current=1;
   cin>>t;
   string s[t];
   string maxFreEle;
   cin>>s[0];
   maxFreEle=s[0];
   for( i=1;i<t;i++)
   {
          cin>>s[i];
   }
   sort(s, s + t);
      for( i=1;i<t;i++)
   {
          if(s[i]==s[i-1]){
            current++;
          }else{
            if(current>max1){
                max1=current;
                maxFreEle=s[i-1];
            }
            current=1;
          }
   }

   cout<<maxFreEle<<endl;



}




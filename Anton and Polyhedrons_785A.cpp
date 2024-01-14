#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,c=0;
   cin>>n;
   string s[n];
   for(int i=0; i<n;i++)
   {
       cin>>s[i];
   }
   for(int i=0; i<n;i++)
   {
       if(s[i]=="Tetrahedron")
       {
           c=c+4;
       }else  if(s[i]=="Cube")
       {
           c=c+6;
       }else  if(s[i]=="Octahedron")
       {
           c=c+8;
       }else  if(s[i]=="Dodecahedron")
       {
           c=c+12;
       }else  if(s[i]=="Icosahedron")
       {
           c=c+20;
       }
   }
   cout<<c<<endl;


}

#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,c=0,c1=0,sum=0;
cin>>n;
 int a;
vector<int>v;
for(int i=0;i<n;i++)
{
    cin>>a;
    v.push_back(a);
     c+=a;
}
c=(c/2);
sort(v.rbegin(),v.rend());
for(int i=0;i<n;i++)
{
    c1+=v[i];
    sum++;
    if(c<c1)
    {
        break;
    }
}
cout<<sum<<endl;
}






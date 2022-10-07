#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    cin>>l>>r;
    int a,b;
    if(r%4==0) b=r;
    if(r%4==1) b=1;
    if(r%4==2) b=r+1;
    if(r%4==3) b=0;
    //cout<<b<<endl;
    if((l-1)%4==0) a=(l-1);
    if((l-1)%4==1) a=1;
    if((l-1)%4==2) a=(l-1)+1;
    if((l-1)%4==3) a=0;
    //cout<<a<<endl;
    int p=a^b;
    cout<<p;
   return 0;
}
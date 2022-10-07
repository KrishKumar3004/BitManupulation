#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n>>i;
    int mask;
    mask=1<<i;
    bool set=(mask & n);
    if(set==1) cout<<"SET";
    else cout<<"NOT SET";
   return 0;
}
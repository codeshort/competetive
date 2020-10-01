#include <iostream>
#define m 1000000009
using namespace std;
#define ll long long int
ll dp[1000005];

int main()
{
   ll t;
   cin>>t;
   dp[0]=0;
   dp[1]=0;
   dp[2]=1;
   dp[3]=1;
   for(ll i =4;i<1000005;i++)
   {
       dp[i]= ( (dp[i-2]%m)+ (dp[i-3]%m) )%m;
   }
   while(t>0)
   {
      ll n;
      cin>>n;
      cout<<"ans is"<<dp[n]<<"\n";
       t--;
   }

    return 0;
}


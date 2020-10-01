/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
      cout<<dp[n]<<"\n";
       t--;
   }

    return 0;
}


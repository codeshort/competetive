#include <iostream>

using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t>0)
    {
        ll n ;
        cin>>n;
        string s;
        cin>>s;
        ll x=0;
        ll y =0;
        char prev;
         if(s[0]=='L')
            {
                x =x-1;
                prev= 'h';
                
            }
            else if(s[0]=='R')
            {
                x =x+1;
                prev='h';
                
            }
            else if(s[0]=='U')
            {
                y=y+1;
                prev = 'v';
                
                
            }
            else if(s[0]=='D')
            {
                y=y-1;
                prev='v';
                
            }
        for(ll i=1;i<n;i++)
        {
            char curr;
            if(s[i]=='L' || s[i]=='R')
            {
                curr='h';
            }
            else if(s[i]=='U' || s[i]=='D')
            {
                curr='v';
            }
            
            if(prev==curr)
            {
                continue;
            }
            else if(s[i]=='L')
            {
                x =x-1;
                 prev='h';
                
            }
            else if(s[i]=='R')
            {
                x =x+1;
                 prev='h';
                
            }
            else if(s[i]=='U')
            {
                y=y+1;
                 prev='v';
                
            }
            else if(s[i]=='D')
            {
                y=y-1;
                 prev='v';
            }
       //cout<<" after "<<s[i]<<" x is"<<x<<" y is "<<y<<"\n";
            
        }
        cout<<x<<" "<<y<<"\n";
        t--;
    }

    return 0;
}


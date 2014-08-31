//@@ -0,0 +1,41 @@
/* Author : Pranav
BITS PILANI Hyderabad Campus */
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
//#include <sstream>
using namespace std;

#define sz(a) int((a).size())
#define pb push_back
#define pop pop_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define fr(i,n) for(int i=0; i<n; i++)
#define N 100000
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;


int main(){
    ll n,maxi,i,res=0,t;
    cin>>t;
    while(t--){
        res=0;
        cin>>n;
        vector<ll> dp(n+2,0);
        vector<ll> arr(n+2,0);
        fr(i,n)
            cin>>arr[i];
        
        maxi=arr[n-1];
        dp[n-1]=-1;
        for(i=n-2;i>=0;i--){
                if(maxi>arr[i])
                    dp[i]= maxi;
                else{
                    dp[i]=-1;
                    maxi=arr[i];
                }
        }
        for(i=0;i<n;i++){
            if(dp[i]==-1)
                continue;
            else
                res+=(dp[i]-arr[i]);
        }
        cout<<res<<endl;
    }
return 0;
}



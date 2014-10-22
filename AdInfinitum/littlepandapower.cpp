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
#define fr(i,n) for(i=0; i<n; i++)
#define N 10005
#define INF 1000000
#define mod 1000000007
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define sc(x) scanf("%lld",&x);
#define pr(x) printf("%lld\n",x);
typedef long long ll;
#include <iostream>
#include <cmath>

ll etf(ll n)
{
   ll result = n;
   ll i;
   for(i=2;i*i <= n;i++)
   {

        if (n % i == 0) result -= result / i;
        while (n % i == 0) n /= i;
   }
   if (n > 1) result -= result / n;
   return result;
 }


long long degree(long long a, long long k,long long x) {        //returns a^k mod p in O(logk)
   ll temp = 1;
   ll cur = a;
  while (k) {
    if (k%2) {
      temp = (temp*cur)%x;

    }
    k /= 2;
    cur = (cur*cur)%x;

  }
  return temp;
}
int main(){
    ios::sync_with_stdio(0);
        ll a,b,x,t;
        cin>>t;
        while(t--){
            cin>>a>>b>>x;
            if(b>=0)
            cout<<degree(a,b,x)%x<<endl;
            else{
                cout<<degree(degree(a,etf(x)-1,x),b,x)<<endl;
            }
        }


    return 0;
}

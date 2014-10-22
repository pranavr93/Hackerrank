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
int main(){
    ios::sync_with_stdio(0);
    ll t,k,res = 0,n,i;

        cin>>n;
        for(i=0;i<n;i++){
            cin>>k;
            res = (res+k+res*k)%mod;
        }
        cout<<res<<endl;

    return 0;
}

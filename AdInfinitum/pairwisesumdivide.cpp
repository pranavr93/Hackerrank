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
    ll t,k,res1,res2,res3,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        ll one = 0;
        ll sum = 0;
        ll two = 0;
        for(i=0;i<n;i++){
            cin>>k;
            if(k==1){one++;}
            else{
                if(k==2){two++;}
                sum++;
            }
        }
        res1 = one*(one-1);
        res2 = one*sum;
        res3 = two*(two-1)/2;
        cout<<res1+res2+res3<<endl;

    }
    return 0;
}

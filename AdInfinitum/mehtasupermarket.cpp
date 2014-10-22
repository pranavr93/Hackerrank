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

vector<ll> v,v2,sub;
ll gcd(ll a,ll b){if(a==0)return(b);else return(gcd(b%a,a));}
ll getSum(ll r,ll l,ll k){
    return r/k - (l-1)/k;
}
int main(){
    ios::sync_with_stdio(0);
      freopen("input.txt","r",stdin);
       freopen("outputCode.txt","w",stdout);
        ll n,k,flg,j,q,l,r,i;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>k;
            v2.pb(k);
        }
        sort(all(v2));
        
        for(i=0;i<n;i++){
             flg=1;
             k=v2[i];
             if(k==1){v.pb(k);break;}
             for(j=0;j<v.size();j++){
                if(gcd(k,v[j])!=1)flg=0;
             }
             if(flg)
                v.pb(k);
        }
        sort(all(v));
        //  for(i=0;i<v.size();i++){cout<<v[i]<<" ";}
        //  cout<<endl;
         cin>>q;
         for(i=0;i<v.size();i++){
            for(j=i+1;j<v.size();j++){
                 sub.pb(v[i]*v[j]);
            }
         }

        ll res;
        while(q--){
            cin>>l>>r;
            res = 0;
            for(i=0;i<v.size();i++){
                res+= getSum(r,l,v[i]); //(r/v[i]) - (l-1)/v[i];
                cout<<v[i]<<": "<<(r/v[i]) - (l-1)/v[i]<<endl;
            }
            for(i=0;i<sub.size();i++){
                res-= getSum(r,l,sub[i]); // (r/sub[i]) - (l-1)/sub[i];
                 cout<<sub[i]<<": "<<(r/sub[i]) - (l-1)/sub[i]<<endl;
            }
            cout<<res<<endl;
        }



    return 0;
}

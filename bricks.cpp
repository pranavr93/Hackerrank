#include<iostream>
#include<vector>
#define N 100110
using namespace std;
typedef long long ll;
vector<ll> dp(N);
vector<ll> arr(N);
vector<ll> sum(N);
ll zero[N];

int main(){
    ios::sync_with_stdio(0);
    ll t,n,a,b,c;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++){
            cin>>arr[n-i-1];
        }
        sum[0]=arr[0];
        for(ll i=1;i<n;i++){
            sum[i]=sum[i-1]+arr[i];
        }
        dp[0]=arr[0];
        dp[1]=arr[1]+arr[0];
        dp[2]=dp[1]+arr[2];
        for(ll i=3;i<n;i++){
           a=arr[i]+sum[i-1]-dp[i-1];
           b=arr[i]+arr[i-1]+sum[i-2]-dp[i-2];
           c=arr[i]+arr[i-1]+arr[i-2]+sum[i-3]-dp[i-3];
           dp[i]=max(max(a,b),c);

        }
        cout<<dp[n-1]<<endl;
        dp.assign(zero,zero+N-1);
        arr.assign(zero,zero+N-1);
        sum.assign(zero,zero+N-1);
    }
   return 0;
}

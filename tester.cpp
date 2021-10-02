//#include<bits/stdc++.h>
#include<vector>
#include<numeric>
#include<algorithm>
#include<cstdio>
#include<string>
#include<iostream>
#include<iterator>
#include<map>
using namespace std;
#define ll                 long long int
#define MOD                1000000007
#define pi                 3.141592653589793238
#define vl                 vector<ll>
#define all(v)             begin(v),end(v)
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (ll)((x).size())
#define fr                first
#define sc                second
#define pll               pair<ll,ll>
#define vpl               vector<pair<ll,ll>>
#define lcm(a,b)        (a/(__gcd(a,b)))*b
#define foru(i,a,b)       for(ll i=a;i<b;i++)
#define ford(i,a,b)       for(ll i=a;i>b;i--)
#define omp               map<ll,ll>
#define ump               unordered_map<ll,ll>
#define FIO         ios_base::sync_with_stdio(false);cin.tie(NULL);cout<<fixed;cout.precision(10);
#define endl        '\n'
//unordered_set<int> p2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101 };
//int32_t mod_inv(int32_t a, int32_t m) ;
// ll power(ll x,ll n) ;
// ll LCM(vector<ll>&v);
// bool is_prime[1000006];
// vector<ll>primes;
//void sieve();
////////////////////////////////////////////////////////////////////////////////
     void solve(){
          ll n,div,k;
          cin>>n>>k;
          vl p(n),r(n);
          for(int i=0;i<n;i++){
               cin>>p[i];
          }
          r=p;
         sort(all(p));
          div=k/n;
          int rem = k%n;
          map<ll,ll> m;

          foru(i,0,n){
               if(rem){
                    m[p[i]]=div+1;
                    rem--;
               }
               else
               m[p[i]]=div;
          }
          for(int i=0;i<n;i++)
               cout<<m[r[i]]<<endl;
         
     }
     int main(){
         solve();
     return 0;
     }
     ////////////////////////////////////////////////////////////////////////////////

     // int32_t mod_inv(int32_t a, int32_t m) {
     // 	int32_t g = m, r = a, x = 0, y = 1;
     // 	while (r != 0) {
     // 		int32_t q = g / r;
     // 		g %= r; swap(g, r);
     // 		x -= q * y; swap(x, y);
     // 	}
     // 	return x < 0 ? x + m : x;
     // }
     // ll power(ll x,ll n)
     // {       ll result=1;
     //     while(n>0)
     //     {
     //         if(n % 2 ==1)
     //             result=(result * x)%MOD;
     //         x=(x*x)%MOD;
     //         n=n/2;
     //     }
     //     return result;
     // }
     // ll LCM(vector<ll>&v){
     //     ll ans=v[0];
     //     for(ll i=2;i<v.size();i++){
     //         ans = (ans * v[i]) / __gcd(ans,v[i]);
     //     }
     //     return ans;
     // }
     // //  bool is_prime[1000006];
     // // vector<ll>primes;
     
     // // void sieve(){
     // //     ll n = 1000000;
     // //     for(ll i=1;i<=n;i++){
     // //         is_prime[i]=1;
     // //     }
     // //     for(ll i=2;i<=n;i++){
     // //         if(is_prime[i]==0)continue;
     // //         primes.push_back(i);
     // //         for(ll j=i*2;j<=n;j+=i){
     // //             is_prime[j]=0;
     // //         }
     // //     }
     // // }
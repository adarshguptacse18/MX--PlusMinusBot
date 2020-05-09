#include <bits/stdc++.h>
using namespace std;
//#include "testlib.h"
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define int long long
#define ll long long
#define M 1000000007
#define MM 998244353
#define inputarr(a,n) for(int i=0;i<n;++i) cin>>a[i]
#define GCD(m,n) __gcd(m,n)
#define LCM(m,n) m*(n/GCD(m,n))
#define mii  map<ll ,ll >
#define sz(a) (int)a.size()
#define msi  map<string,ll >
#define rep(a,b)    for(ll i=a;i<b;i++)
#define rep0(n)    for(ll i=0;i<n;i++)
#define repi(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define ppb pop_back
#define endl '\n'
#define asdf ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define r0 return 0;
#define FORD(i, a, b) for (int i = (int) (a); i >= (int) (b); --i)
#define inputoutput freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define Set(a, s) (a, s, sizeof (a))
#define FOR repi
#define vii vector<pii>
#define pii pair<int,int>
#define REVERSE(v) reverse(all(v))
#define trav(a, x) for(auto& a : x)
#define display(x) trav(a,x) cout<<a<<" ";cout<<endl
#define debug cerr<<"bhau"<<endl
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    std::cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');std::cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
template<typename T, typename U> static inline void amin(T &x, U y) 
{ 
    if (y < x) 
        x = y; 
}
template<typename T, typename U> static inline void amax(T &x, U y) 
{ 
    if (x < y) 
        x = y; 
}
 
ll max(ll a, ll b) { return (a > b)? a : b;}
int min(int a, int b) { return (a < b)? a : b;} 
bool z(int x,int y,int dx,int dy){
	if(x+dx<5 && x+dx>=0 && y+dy>=0 &&y+dy<5) return 1;
	return 0;
}
bool z(int x,int y){
	if(x<5 && x>=0 && y>=0 && y<5){
		return 1;
	}
	return 0;
}
const int n=5;
bool vis[n+10][n+10];
int cnt=0;
	vector<vector<int>> a(n+10,vector<int>(n+10,10000));

void find(int x,int y,int val){
	if(z(x,y)==0) return;
	if(vis[x][y]) return;
	cnt++;
	vis[x][y]=1;
	if(z(x+1,y) && a[x+1][y]==val) {
		// cnt++;
		find(x+1,y,val);
	} 
	if(z(x-1,y) && a[x-1][y]==val) find(x-1,y,val);
	if(z(x,y+1) && a[x][y+1]==val) find(x,y+1,val);
	if(z(x,y-1) && a[x][y-1]==val) find(x,y-1,val);
}
int solve(){

	freopen("/home/addy/Desktop/bots/input.txt", "r", stdin);
	// int n=5;
	// int a[n+10][n+10];
	rep0(n) repi(j,0,n) cin>>a[i][j];
	int cmove=0;
	cin>>cmove;
	int x=0,y=0,ans=0;
	// int z={}
	// trace(cmove);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cnt=0;
			memset(vis,0,sizeof(vis));
			find(i,j,a[i][j]+cmove);
			if(cnt>=3){
				if(cnt*(a[i][j]+cmove)>=ans){
					ans=cnt*(a[i][j]+cmove);
					x=i;
					y=j;
				}
			}
			// trace(i,j,cv,cv*(a[i][j]+cmove));
		}
		// cout<<endl;
	}
	// for(int i=0;i<n;i++){
		// for(int j=0;j<n;j++) cout<<a[i][j]<<" ";cout<<endl;
	// }
	// trace(ans,cmove);
	cout<<x<<" "<<y<<endl;
	




    return 0;
}
signed main(){
    asdf
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}


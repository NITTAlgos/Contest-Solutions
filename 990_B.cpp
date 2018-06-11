/**
	Contest: Educational Codeforces Round 45 
	Topics: #Greedy
	Problem: http://codeforces.com/contest/990/problem/A
	Author: Sai Hemanth B
**/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mod 1000000007LL
#define eps 1e-13
#define PI 3.141592653589793238L
#define INF 1000000011
#define INFLL 1000000000000000011LL
#define endl '\n'
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vc vector<char>
#define vs vector<string>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pil pair<int, long long>
#define pli pair<long long, int>
#define pcc pair<char, char>
#define pdd pair<double, double>
#define mp make_pair
#define F first
#define S second
#define pb(x) push_back(x)
#define fo(i,a,n) for(i = (a); i < (n); i++)
#define foi(i,a,n) for(i = (a); i <= (n); i++)
#define pd(x) cout<<x
#define sd(x) cin>>x
#define nl cout<<endl
#define gtl(x) getline(cin, (x))
#define flsh fflush(stdout)
#define sws ios_base::sync_with_stdio(false); cin.tie(0)
#define gcd __gcd
#define clr(x) memset(x,0,sizeof(x))
#define all(a) (a).begin(), (a).end()
#define foreach(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); ++i)
#define sz(a) (int)((a).size())
//int a[25]= { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
//int dw[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
//int dw[8][2]={{0,1},{1,0},{0,-1},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
//ll fibonacci[2][2] = {{0,1},{1,1}};
//ll identity[2][2] = {{1,0},{0,1}};
ll i,j,k;

int main() {
	ll n,k;
	cin>>n>>k;
	vll v(n);
	fo(i,0,n) cin>>v[i];
	vector<ll> v2;
	sort(all(v));
	v2.pb(v[0]);
	ll last = v[0];
	fo(i,1,n) {
		if(v[i] != last) {
			v2.pb(v[i]);
		}
		last = v[i];
	}
	ll n2 = v2.size();
	vector<bool> flag(n2,true);
	fo(i,1,n2) {
		if((v2[i-1] < v2[i]) && (v2[i] <= (v2[i-1]+k))) {
			flag[i-1] = false;
		}
	}
	ll j = 0;
	ll count = 0;
	fo(i,0,n) {
		if(v[i] != v2[j]) j++;
		if(flag[j]) {
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}

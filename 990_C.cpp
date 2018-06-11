/**
	Contest: Educational Codeforces Round 45 
	Topics: #Implementation
	Problem: http://codeforces.com/contest/990/problem/C
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
	ll n;
	cin>>n;
	map<ll,ll> mmap;
	ll maxx = -INFLL;
	fo(i,0,n) {
		string s;
		cin>>s;
		stack<char> st;
		fo(j,0,s.length()) {
			if(s[j] == '(') st.push(s[j]);
			else {
				if(st.size()>0 && st.top() == '(') {
					st.pop();
				}
				else {
					st.push(s[j]);
				}
			}
		}
		
		ll in = 0;
		fo(j,0,s.length()) {
			if(s[j] == ')') in--;
			else in++;
		}
		if(abs(in) != st.size()) continue;
		if(mmap.find(in) == mmap.end()) mmap.insert(mp(in,1));
		else mmap[in]++;
		maxx = max(maxx,in);
	}
	ll count = 0;
	if(mmap.find(0) != mmap.end()) count += (mmap[0]*(mmap[0]-1) + mmap[0]);
	fo(i,1,maxx+1) {
		if(mmap.find(i) != mmap.end() && mmap.find(-i) != mmap.end()) {
			count += (mmap[i]*mmap[-i]);
		}
	}
	cout<<count<<endl;
	return 0;
}

/**
	Contest: Educational Codeforces Round 45 
	Topics: #Constructive #Greedy
	Problem: http://codeforces.com/contest/990/problem/D
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
	ll n,a,b;
	cin>>n>>a>>b;
	if(a!=1 && b!=1) {
		cout<<"NO"<<endl;
		return 0;
	}
	ll n1 = (a==1)?b:a;
	if(n1 > n) {
		cout<<"NO"<<endl;
		return 0;
	}
	ll edges = (n*(n-1))/2;
	if(edges < ((n-a)+(n-b))) {
		cout<<"NO"<<endl;
		return 0;	
	}
	ll mat[n][n];
	fo(i,0,n) fo(j,0,n) mat[i][j] = 0;
	fo(i,0,n - n1) {
		mat[i][i+1] = 1;
		mat[i+1][i] = 1;
	}
	if(a==1) {
		fo(i,0,n) {
			fo(j,0,n) {
				mat[i][j] = (mat[i][j] == 0)?1:0;
			}
		}
		fo(i,0,n) mat[i][i] = 0;
	}
	cout<<"YES"<<endl;
	fo(i,0,n) {
		fo(j,0,n) cout<<mat[i][j];
		nl;
	}
	return 0;
}

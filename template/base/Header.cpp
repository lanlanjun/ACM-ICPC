#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef double db;
typedef pair<int,int> pii;
typedef vector<int> vi;
#define dd(x) cout << #x << " = " << x << ", "
#define de(x) cout << #x << " = " << x << endl
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define per(i,a,b) for(int i=(b)-1;i>=(a);--i)
#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
//INF = 1 061 109 567 ; INF + INF = 2 122 219 134 ;
//LINF = 4 557 430 888 798 830 399 ; LINF + LINF = 9 114 861 777 597 660 798 ;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = (int)1e9+7;
const int N = (int)-1;

//常用函数
char read_char() {char c;for(;;){c=getchar();if(c>='A'&&c<='Z')return c;}}
ll powmod(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
ll add(ll a, ll b) { return ((a + b) % MOD + MOD) % MOD; }
ll mul(ll a, ll b) { return (a * b % MOD + MOD) % MOD; }

//-------- 变量 --------//


//-------- 函数 --------//

void Init() {
    
}

int Solve() {

}

//-------- main --------//

int main ()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    //Pre();
    //int t; scanf("%d", &t); while (t--) {
    while (~scanf("", )) {
        //printf("Case %d: ", ++kase);
        //if (n == 0) break;
        Init();
        Solve();
        //if (t) puts("");
    }
    return 0;
}

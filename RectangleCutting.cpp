#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define ll             long long int
#define ld             long double
#define mod            1000000007
#define endl           "\n"
#define vi             vector<ll>
#define vs             vector<string>
#define pii            pair<ll, ll>
#define ump            unordered_map
#define mp             map
#define pq_max         priority_queue<ll>
#define pq_min         priority_queue<ll,vi,greater<ll>
#define ff             first
#define ss             second
#define mid(l,r)       (l+(r-l)/2)
#define loop(i,a,b)    for(int i=(a); i <=(b);i++)
#define looprev(i,a,b) for(int i=(a); i >=(b);i--)
#define clr(val)       memset(val,0,sizeof(val))
#define what_is(x)     cerr << #x << " is " << x << endl; 
#define OJ             \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int main() 
{
    ll a,b;
    cin>>a>>b;
 
    vector <vector <ll>> dp(a+1, vector <ll>(b+1,INT_MAX));

    loop(i,0,a){
        loop(j,0,b){
            if (i == j) dp[i][j] = 0;
            else{
                //Vertical
                loop(k,1,i-1){
                    dp[i][j] = min(dp[i][j], 1 + dp[i-k][j] + dp[k][j]);
                }
                //Horizontal
                loop(k,1,j-1){
                    dp[i][j] = min(dp[i][j], 1 + dp[i][j-k] + dp[i][k]);
                }
            }
        }
    }
    cout<<dp[a][b];
    
return 0;
   
}
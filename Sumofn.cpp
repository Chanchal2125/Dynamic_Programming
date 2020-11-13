#include <iostream>
#include <string>
#include <cmath>
#include <climits>
#include <vector>
#include <set>
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
    int n;
    cin>>n;
    vector <int> dp(n+1,0);

    //Base Case
    dp[0] = dp[1] = dp[2] = 1;
    dp[3] = 2;

    loop(i,4,n){
        dp[i] = dp[i-1] + dp[i-3] + dp[i-4];
    }
 
    cout<<dp[n];
return 0;
   
}
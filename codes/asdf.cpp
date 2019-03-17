#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <string>
#include <map>

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cstdio>

using namespace std;

#define mp make_pair
#define pb push_back
#define F first
#define S second

#define MAXN 100005
#define MOD 1000000007
#define EPS 0.0000001

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;


int tc, n;
ull a[MAXN];
ull dp, sum, prod;

int main()
{
    ios::sync_with_stdio(false);
    
    cin >> tc;
    
    while (tc--) {
        cin >> n;
        for (int i=0; i<=n; i++)
            cin >> a[i];
        
        sum = 2 * a[0];
        dp = 0;
        prod = 1;
        
        for (int i=1; i<=n; i++) {
            dp = ((dp * 2) % MOD + (sum * a[i]) % MOD) % MOD;
            prod = (prod << 1) % MOD;
            sum = (sum + (prod * a[i]) % MOD) % MOD;
            cout<<dp<<"\t"<<prod<<"\t"<<sum<<endl;
        }
        
        cout << dp << endl;
    }
    
    return 0;
}

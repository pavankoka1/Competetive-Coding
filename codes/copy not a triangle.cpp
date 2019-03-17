#include <bits/stdc++.h>
#define ll long long 
 
using namespace std;
 
int main() 
{
    std::ios::sync_with_stdio(0);cin.tie(0);
    while(true){
    int n , ans = 0 , j , p;
    cin >> n;
    if(n == 0)      return 0;
    
    vector<int>a(n);
    for(int i = 0;i < n;i++)    cin >> a[i];
    sort(a.begin() , a.end());
 
    for(int i = 0;i < n;i++)
    {
        j = i + 1 ; p = j + 1;
        while(j < n)
        {
            while(a[p] <= a[i] + a[j] && p < n)  p++;
            ans += n - p;//cout << ans << endl;
            j++;
        }
    }
    cout << ans << "\n";
    ans = 0;
    }
} 

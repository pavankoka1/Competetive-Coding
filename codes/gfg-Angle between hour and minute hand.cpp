#include<bits/stdc++.h>
using namespace std;
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    double h,m;
	    cin>>h>>m;
	    
	    if(h==12 ) h=0;
	    if(m==60) m=0;
	    
	    int ha = 0.5 * (h*60 + m);
	    int ma = m*6;
	    
	    int ans = abs(ha-ma);
	    ans = min(ans, 360-ans);
	    cout<<ans<<endl;
	}
	return 0;
}

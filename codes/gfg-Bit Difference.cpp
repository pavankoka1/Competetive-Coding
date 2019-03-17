#include<iostream>
using namespace std;
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int a,aa,b,bb;
	    cin>>a>>b;
	    aa=a;
	    bb=b;
	    int ans=0;
	    while(a>0 & b>0){
	        if((a & 1) != (b & 1)){
	            ans++;
	        }
//	        cout<<ans<<" "<<(a & 1)<<" "<<(b & 1)<<endl;
	        a=a>>1;
	        b=b>>1;
	    }
	    
	    if(a>0 && b==0)
	    {
	        while(a>0){
	        	if(a&1 == 1)
	            	ans++;
	            a=a>>1;
	        }
	    }
	    if(b>0 && a==0)
	    {
	        while(b>0){
	        	if(b&1 == 1)
	            	ans++;
	            b=b>>1;
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}

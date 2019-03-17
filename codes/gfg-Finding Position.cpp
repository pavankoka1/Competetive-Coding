#include<bits/stdc++.h>
using namespace std;

int count(int n){
    
    int b=0;
    while(n>1){
 //   	cout<<n<<endl;
        n=n>>1;
        b++;
        
    }
    return pow(2,b);
}
int main()
 {
 	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<count(n)<<endl;
	}
	return 0;
}

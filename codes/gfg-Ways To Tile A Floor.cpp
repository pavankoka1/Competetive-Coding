#include<iostream>
using namespace std;

long long int dp[70]={0};

long long int getTiles(int n){
    if(dp[n]!=0)
        return dp[n];
    if(n==1)
        return 1;
    if(n<=0)
        return 0;
    dp[n]=getTiles(n-1)+getTiles(n-2);
    return dp[n];
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<getTiles(n)<<endl;
	}
	return 0;
}

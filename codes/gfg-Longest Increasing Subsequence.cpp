#include<iostream>
using namespace std;

int getn(int a[],int dp[],int l,int p,int n){
	int i=1;
	while(i<n){
	    for(int j=0;j<i;j++){
	        if(a[i]>a[j])
	            dp[i]=max(dp[j]+1,dp[i]);
	    }
	    i++;
	}
	return dp[n-1];
}
int main()
 {
 	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],dp[n]={0};
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        dp[i]=1;
	    cout<<getn(a,dp,-1,0,n)<<endl;     
	}
	return 0;
}

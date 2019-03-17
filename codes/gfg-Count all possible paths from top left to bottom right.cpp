#include<bits/stdc++.h>
using namespace std;

int dp[101][101]={0};

int calc(int l,int r){
	
	cout<<l<<" "<<r<<endl;
	
	if(l==1 || r==1)
		return 1;
	if(dp[l][r]!=0)
		return dp[l][r];
	
	
	dp[l][r]=calc(l-1,r)+calc(l,r-1);
	
	return dp[l][r];		
}

int wdp(int m,int n){
	if(m==1 || n==1)
		return 1;
	return wdp(m-1,n)+wdp(m,n-1);	
}

int arr(int m,int n){
	
	int a[m][n];
	for(int i=0;i<n;i++)
		a[0][i]=1;
	for(int i=0;i<m;i++)
		a[i][0]=1;
	for(int i=1;i<m;i++)
		for(int j=1;j<n;j++)
			a[i][j]=a[i-1][j]+a[i][j-1];
	
	return a[m-1][n-1];				
}

long long int comb(int m,int n){
	int path = 1; 
            for (int i = n; i < (m + n - 1); i++) { 
                path *= i; 
                path /= (i - n + 1); 
            } 
	return path;				
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		if(m<n)
			swap(m,n);
//		cout<<"okay "<<m<<" "<<n<<endl;
		cout<<comb(m,n)<<endl;
	}
}


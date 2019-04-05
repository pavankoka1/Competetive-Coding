#include<iostream>
using namespace std;

bool findPartiion (int arr[], int n) 
{ 
    int sum = 0; 
    int i, j; 
    for (i = 0; i < n; i++) 
      sum += arr[i];      
    if (sum%2 != 0)   
       return false;    
    bool part[sum/2+1][n+1];      
    for (i = 0; i <= n; i++) 
      part[0][i] = true; 
    for (i = 1; i <= sum/2; i++) 
      part[i][0] = false;        
     for (i = 1; i <= sum/2; i++)   
     { 
       for (j = 1; j <= n; j++)   
       { 
         part[i][j] = part[i][j-1]; 
         if (i >= arr[j-1]) 
           part[i][j] = part[i][j] || part[i - arr[j-1]][j-1]; 
       }         
     }     
     return part[sum/2][n]; 
} 
int main()
 {
// 	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n,s=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s+=a[i];
	    }
	    if(findPartiion(a,n))
	    	cout<<"YES"<<endl;
	    else
			cout<<"NO"<<endl;	
	    continue;
	    if(s%2){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    s/=2;
	    bool dp[n+1][s+1]={0};
	    for(int i=0;i<=n;i++)
	        dp[i][0]=1;
		for(int i=1;i<=s;i++)
	        dp[0][i]=0;	     
	    for(int i=0;i<n;i++){
	        for(int j=1;j<=s;j++){
	            if(a[i]<=j){
	                if(dp[i][j-a[i]]==1 || dp[i][j]==1)
	                    dp[i+1][j]=1;    
	            }
	            else
	                dp[i+1][j]=dp[i][j];
	        }
	    } 	    
	    if(dp[n][s])
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}

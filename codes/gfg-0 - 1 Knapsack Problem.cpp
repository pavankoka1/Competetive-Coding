#include<bits/stdc++.h>
using namespace std;

int getn(int w[],int v[],int s,int n){
    int k[n+5][s+5]={0};
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(i==0 || j==0){
                k[i][j]=0;
            }
            else if(v[i-1]<=j){
                k[i][j]=max(w[i-1]+k[i-1][j-v[i-1]],k[i-1][j]);
            }
            else
                k[i][j]=k[i-1][j];
//            cout<<k[i][j]<<" ";    
        }
//        cout<<endl;
    }
    return k[n][s];
}
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int a[n],b[n];
	    
	    for(int i=0;i<n;i++)
	    	cin>>a[i];
	    for(int i=0;i<n;i++)
			cin>>b[i];
	
	    cout<<getn(a,b,s,n)<<endl;     
	}
	return 0;
}

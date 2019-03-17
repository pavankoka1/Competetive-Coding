#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int a[m][n];
	    for(int i=0;i<m;i++)
	        for(int j=0;j<n;j++)
	            cin>>a[i][j];
	    
	    int ra[m],ca[n];
	    for(int i=0;i<m;i++){
	        ra[i]=a[i][0];
	        a[i][0]=0;
	    }
	    for(int i=0;i<n;i++){
	        ca[i]=a[0][i];
	        a[0][i]=0;
	    }
	    for(int i=1;i<m;i++){
	        for(int j=1;j<n;j++){
	            if(a[i][j]==1)
	            {
	                a[i][0]=1;
	                a[0][j]=1;
	            }
	        }
	    }
	    for(int i=0;i<m;i++){
	        if(a[i][0]==1){
	            for(int j=1;j<n;j++)
	                a[i][j]=1;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(a[0][i]==1){
	            for(int j=1;j<m;j++)
	                a[j][i]=1;
	        }
	    }
	    for(int i=0;i<m;i++){
	        if(ra[i]==1){
	            for(int j=0;j<n;j++)
	                a[i][j]=1;
	            for(int j=0;j<m;j++) 
	                a[j][0]=1;
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(ca[i]==1){
	            for(int j=0;j<m;j++)
	                a[j][i]=1;
	            for(int j=0;j<n;j++) 
	                a[0][j]=1;
	        }
	    }
	    
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}

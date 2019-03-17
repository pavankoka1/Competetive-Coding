#include<iostream>
using namespace std;

int get(int a[],int n){
    int i=0,j=n-1,ans=0;
    while(a[i]!=1 && i<n)
        i++;      
    if(i == n)
        return -1;
//   cout<<ans<<endl;    
    while(a[j]!=1)
        j--;
    ans=n-1-j;
    ans=max(ans,i);
//	cout<<" "<<ans<<endl;   
    
 //   cout<<" "<<i<<endl;
    int c=0,m=0;
    for(int k=i;k<=j;k++){
        if(a[k]==1)
        {
        	m=max(c,m);
        	c=0;
		}
        else
            c++;
    }
//    cout<<" "<<m<<endl;
//	cout<<m<<endl;
    m=(m+1)/2;
//    cout<<" "<<m<<endl;
    return max(ans,m);
}
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    cout<<get(a,n)<<endl;     
	}
	return 0;
}

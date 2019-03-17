#include<iostream>
using namespace std;

int get(int a[],int n){
    int rs=0,ls=0;
    for(int i=1;i<n;i++)
        rs+=a[i];
    for(int i=0;i<n;i++){
        if(ls==rs)
            return i;
        ls+=a[i];
        if(i!=n-1)
            rs-=a[i+1];
    }
    if(ls==rs)
            return n-1;
    return -2;
}
int main()
 {
 	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	   cout<<get(a,n)+1<<endl;     
	}
	return 0;
}

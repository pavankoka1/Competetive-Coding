#include<iostream>
using namespace std;

int lb(int l,int r,int n,int a[]){
    if(l==r) 
    {
        if(a[l]==n)
            return l;
        return -1;    
    }
    if(l+1==r)
    {
        if(a[l]==n)
            return l;
        if(a[r]==n)
            return r;
        return -1;    
    }
    int m=(l+r)/2;    
    if(a[m]<n)
        return lb(m,r,n,a);
    if(a[m]>n)
        return lb(l,m,n,a);
    if(a[m]==n){
        if(a[m-1]==n)
            return lb(l,m,n,a);
        else
            return m;
    }    
}
int rb(int l,int r,int n,int a[]){
//	cout<<l<<" "<<r<<endl;
    if(l==r) 
    {
        if(a[l]==n)
            return l;
        return -1;    
    }
    if(l+1==r)
    {
 //   	cout<<"fuck "<<a[l]<<" "<<a[r]<<" "<<n<<endl;
        if(a[r]==n)
            return r;
        if(a[l]==n)
            return l;
        return -1;    
    }
    int m=(l+r)/2;    
    if(a[m]<n)
        return rb(m,r,n,a);
    if(a[m]>n)
        return rb(l,m,n,a);
    if(a[m]==n){
        if(a[m+1]==n)
            return rb(m,r,n,a);
        else
            return m;
    }    
}
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int ans;
		ans=lb(0,n-1,x,a);
		if(ans==-1)
			cout<<"-1"<<endl;
		else
			cout<<rb(0,n-1,x,a)-ans+1<<endl;	   
	}
	return 0;
}

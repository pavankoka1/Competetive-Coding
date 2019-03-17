#include<bits/stdc++.h>
using namespace std;

int check(int l,int r,int a[],int s,int ans){
    while(l<r){
        if(a[l]+a[r]<s){
            ans+=r-l;
            l++;
            continue;
        }
        else
            r--;
    }
    return ans;
}
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n,s,ans=0;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    for(int i=0;i<n-2;i++){
	        ans=check(i+1,n-1,a,s-a[i],ans);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

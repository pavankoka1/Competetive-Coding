#include<bits/stdc++.h>
using namespace std;

long long int count(int l,int r,int a[],int n,int s){
    long long int c=0;
//    cout<<l<<" "<<r<<" "<<s<<endl;
    while(l<r){
//    	cout<<" "<<l<<" "<<r<<endl;
        if(a[l]+a[r]==s){
            c++;
            l++;
            continue;
        }
        if(a[l]+a[r]>s)
        {
            r--;
            continue;
        }
        l++;
    }
    return c;
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
        int n,x;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)    
            cin>>a[i];
        cin>>x;
		sort(a,a+n);    
        long long int ans=0;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
 //           	cout<<i<<" "<<j<<" ";
                ans+=count(j+1,n-1,a,n,x-a[i]-a[j]);
 //               cout<<ans<<endl;
            }
        }
        cout<<ans<<endl;
	}
}
 // 0 0 1 1 5 6

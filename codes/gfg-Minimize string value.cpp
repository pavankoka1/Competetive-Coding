#include<bits/stdc++.h>
using namespace std;
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>s>>n;
	    int a[27]={0};
	    for(int i=0;i<s.length();i++)
	        a[(int)s[i]-97]++;
	    sort(a,a+26, greater<int>());     
	    
	    int b[100]={0};
	    int ii=0;
	    while(a[ii]!=0){
	        b[a[ii]]++;
	        ii++;
	    }
	    int i=s.length();
	    while(b[i]==0)
	        i--;
	      
	    while(n>0){
	        while(b[i]==0)
	            i--;
	            
	        if(b[i]!=0 && n>0)
	        {
	           b[i]--;
	           b[i-1]++;
	           n--;
	        }
	    }
	    int ans=0;
//	    cout<<i<<endl;
	    	
	    for(int j=1;j<=i;j++)
	        ans+=b[j]*(j*j);
	    cout<<ans<<endl;
	}
	return 0;
}

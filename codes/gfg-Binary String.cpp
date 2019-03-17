#include<iostream>
using namespace std;
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<n;i++)
	        if(s[i]=='1')
	            c++;
	   cout<<c*(c-1)/2<<endl;         
	}
	return 0;
}

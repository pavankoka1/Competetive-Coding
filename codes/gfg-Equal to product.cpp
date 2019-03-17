#include<bits/stdc++.h>
using namespace std;
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    long long unsigned int n,p,x;
	    cin>>n>>p;
//	    cout<<p<<endl;
	    vector<long long unsigned int> v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    bool f=0;
	    for(int i=0;i<n-1;i++){
	        if(v[i]!=0 && p%v[i]==0){
//	        	cout<<p/v[i]<<endl;
//	        	cout<<"koka"<<endl;
	            if(binary_search(v.begin()+i+1,v.end(),p/v[i])){
//	            	cout<<"koka"<<endl;
	                f=1;
	                break;
	            }
	                
	        }
	    }
	    if(f)
	        cout<<"Yes"<<endl;
	       else
	        cout<<"No"<<endl;
	}
	return 0;
}

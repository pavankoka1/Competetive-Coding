#include<iostream>
#include<vector>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    vector <int> v;
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)   
	 {
	     cin>>a[i];
	     b[i]=-1;
	 }
	for(int i=0;i<n;i++)
	{
	        v.push_back(i);
	   while(a[v[v.size()-1]]>a[v[v.size()-2]] && v.size()>1)
	   {
	       b[v[v.size()-2]]=a[v[v.size()-1]];
	       v.erase(v.begin()+v.size()-2);
	   }
	}
	for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl; 
	}
}

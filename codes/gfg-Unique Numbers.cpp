#include<bits/stdc++.h>
using namespace std;

void getUnique(int l,int r){
	for(int i=l;i<=r;i++){
		bool v[10]={false};
		int n=i;
		while(n>0){
			if(v[n%10])
				break;
			v[n%10]=true;
			n=n/10;	
		}
		if(n==0)
			cout<<i<<" ";
	}
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		getUnique(l,r);
		cout<<endl;
	}
}


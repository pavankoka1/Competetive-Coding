#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,e;
		cin>>n>>e;
		vector<int> v1[n],v2[n];
		for(int i=1;i<=n;i++){
			v1[i].clear();
			v2[i].clear();
		}
			
		for(int i=0;i<e;i++){
			int p,c;
			cin>>p>>c;
			v1[p].push_back(c);
		}
		for(int i=0;i<e;i++){
			int p,c;
			cin>>p>>c;
			v2[p].push_back(c);
		}
		for(int i=1;i<=n;i++){
			cout<<v1[i].size()<<" "<<v2[i].size()<<endl;
		}
		bool f=0;
//		cout<<v1[1][0]<<" "<<v1[1][1]<<endl;
//		cout<<v2[1][0]<<" "<<v2[1][1]<<endl;
		for(int i=1;i<=n;i++){
//			cout<<v1[i].size()<<v2[i].size();
			if(v1[i].size() != v2[i].size()){
				f=1;
				break;
			}
			int l=v1[i].size();
			if(l==0)
				continue;
//			cout<<l<<endl;	
			for(int j=0;j<l;j++){
				if(v1[i][j]!=v2[i][l-1-j]){
					f=1;
					break;
				}
			}	
		}
		if(f==0)
			cout<<"1"<<endl;
		else	
			cout<<"0"<<endl;	
	}
}


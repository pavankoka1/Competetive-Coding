#include<bits/stdc++.h>
using namespace std;

vector<int> v[200];
int val[200];

int getDFSval(int root,int des,int s,bool vis[]){
//	cout<<root<<" "<<des<<endl;
	if(root==des){
		vis[des]=1;
		if(val[des]<=s)
			return val[des];
		return 0;	
	}
	int x;
	vis[root]=1;
	for(int i=0;i<v[root].size();i++){
		if(!vis[v[root][i]])
			x=getDFSval(v[root][i],des,s,vis);
		if(vis[des]){
			if(val[root]<=s)
				return val[root]+x;
			return x;	
		}				
	}
	return 0;
}
int getDFS(int root,int des,int s){
	bool vis[200]={0};
	return getDFSval(root,des,s,vis);
}

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	int nn=2;
	val[1]=0;
	while(t--)
	{
		int q;
		cin>>q;		
		if(q==1){
			int par,value;
			cin>>par>>value;
			v[nn].push_back(par);
			v[par].push_back(nn);
			val[nn]=value;
			nn++;
		}
		else{
			int ln,rn,s;
			cin>>ln>>rn>>s;
			cout<<getDFS(ln,rn,s)<<endl;			
		}
	}
}


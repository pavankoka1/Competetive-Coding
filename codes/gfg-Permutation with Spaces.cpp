#include<bits/stdc++.h>
using namespace std;

void call(char s[],char a[],int i,int j,int n){
	if(i==n){
		a[j]='\0';
		cout<<"("<<a<<")";
		return;
	}
	a[j]=' ';
	a[j+1]=s[i];
	call(s,a,i+1,j+2,n);
	a[j]=s[i];
	call(s,a,i+1,j+1,n);
}
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		char a[2*l],ss[l];
		for(int i=0;i<l;i++)
			ss[i]=s[i];
		a[0]=ss[0];
		call(ss,a,1,1,l);
		cout<<endl;
	}
}


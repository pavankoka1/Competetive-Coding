#include<bits/stdc++.h>
using namespace std;

int brk(int a,int b,int arr[])
{
	int s1,s2;
	if(a==b)
		return arr[a];
	s1=brk(a,(a+b)/2,arr);
	s2=brk((a+b)/2+1,b,arr);
	if(s1+s2>=s1 && s1+s2>=s2)
		return s1+s2;
	else
	{
		if(s1>=s2)
			return s1;
		else
			return s2;	
	}		
}
int main()
{
	freopen("input.txt","r",stdin);
	int n;
	cin>>n;
	int arr[n+5];
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,s;
		cin>>a>>b;
		s=brk(a,b,arr);
		cout<<s<<endl;
	}	
}


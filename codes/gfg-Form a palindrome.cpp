#include<bits/stdc++.h>
using namespace std;

int check(string s1,string s2)
{
	int n = s2.length();
    for (int i = 0; i < n / 2; i++) 
        swap(s2[i], s2[n - i - 1]);
	int l1=s1.length(),l2=s2.length();
	int a[l1+1][l2+1];
	for(int i=0;i<=l1;i++)
		a[i][0]=0;
	for(int i=0;i<=l2;i++)
		a[0][i]=0;
	for(int i=1;i<=l1;i++)
		for(int j=1;j<=l2;j++)
			if(s1[i-1]==s2[j-1])
				a[i][j]=a[i-1][j-1]+1;
			else
				a[i][j]=max(a[i-1][j],a[i][j-1]);
	if(a[l1][l2]==a[l1][l2-1])
		return l1+l2-2*a[l1][l2]-1;
	else
		return l1+l2-2*a[l1][l2];							
}
int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a=s.length()-1;
		for(int i=1;i<s.length()-1;i++)
		{
			a=min(a,check(s.substr(0,i),s.substr(i,s.length()-i)));
//			cout<<check(s.substr(0,i),s.substr(i,s.length()-i))<<endl;
		}
		cout<<a<<endl;	
	}
}


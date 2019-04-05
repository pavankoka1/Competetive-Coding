#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 
int main()
{
//	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	int a[6105][6105]={0};
	while(t--)
	{
		string s1,s2;
		cin>>s1;
		s2=s1;
		reverse(s2.begin(),s2.end());
		for(int i=1;i<=s1.length();i++)
		{
			for(int j=1;j<=s1.length();j++)
			{
				if(s1[j-1]==s2[i-1])
					a[i][j]=a[i-1][j-1]+1;
				else
					a[i][j]=max(a[i-1][j],a[i][j-1]);	
			}
		}
		cout<<s1.length()-a[s1.length()][s1.length()]<<endl;
	}
}

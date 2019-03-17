#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	
	while(t--)
	{
		int l,q,i,j;
		string s;
		cin>>l>>q>>s;
		
		while(q--)
		{
			int c=0,k;
			cin>>k;
			for(i=0;i<l-k+1;i++)
			{
				for(j=i+1;j<l-k+1;j++)
				{
					if(s.substr(i,k)==s.substr(j,k))
						c++;
					//cout<<s.substr(i,k)<<" "<<s.substr(j,k)<<endl;
				}
			}
			cout<<c<<endl;
		}
		
	}
		
}

/*
1
5 4
ababa
2
1
3
4
*/


#include <bits/stdc++.h>
using namespace std;
char *encode(char *src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		char str[10000];
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this function */
char *encode(char *src)
{     
	string s=str;
	int l=s.length();
	char a[l+2],p=0;
	for(int i=0;i<l;){
//		cout<<s[i]<<" "<<i<<endl;
		a[p++]=s[i];
		
		int j=i+1;
		while(s[j]==s[j-1] && j<l)
			j++;
		a[p++]=j-i+48;
//		cout<<a[p-1]<<" "<<a[p-2]<<endl;
		i=j;	
	}
	a[p]='\0';
	string ss=a;
//	cout<<ss<<endl;
	return a;  
}

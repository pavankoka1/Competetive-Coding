#include<iostream>
#include<fstream>
using namespace std;
#include<math.h>
int main()
{
	int i;
	cin>>i;
	int rem,rev = 0;
	for(;i>0;)
	{
		rem = i%10;
		i = i/10;
		rev = rev*10 + rem;
	}
	cout<<rev<<endl;
}

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i,j,n;
	cin>>n;
	int arr[n][n];
	
	 for(i=1;i<=n;i++)
	 {
	 	for(j=0;j<=n;j++)
	 	{
	 		cin>>arr[i][j];
	 		j++;
		 }
		 i++;
	 }
	 
	 for(i=0;i<=n;i++)
	 {
	     for(j=0;j<=n;j++)
	     {
	     	cout<<arr[i][j]<<" ";
	     	j++;
		 }
		 i++;
		 cout<<"\n";
	 }
}

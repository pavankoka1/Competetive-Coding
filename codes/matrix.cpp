#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,j,n=0;
    cin>>n;
    int arr[n*n];
    
    for(i=0;i<n*n;i++)
    cin>>arr[i];
    
    int k=0;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
            cout<<arr[k]<<" ";
            k++;
		}
		cout<<"\n";
	}
     
}

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    bool f=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==i+1)
            {
                cout<<i+1<<" ";
                f=1;
            }
        }
        if(!f)
            cout<<"Not Found"<<endl;
        cout<<endl;
	}
	return 0;
}

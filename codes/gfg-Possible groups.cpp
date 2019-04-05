#include<iostream>
using namespace std;
int main()
 {
 //	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    unsigned long long int a=0,b=0,c=0;
	    cin>>n;
	    while(n--){
	        cin>>x;
	        x=x%3;
	        if(x==0)
	            a++;
	        else if(x==2)
	            c++;
	        else
	           b++; 
	    }
	    cout<<((a*(a-1))/2)+b*c+((a*(a-1)*(a-2))/6)+((b*(b-1)*(b-2))/6)+((c*(c-1)*(c-2))/6)+a*b*c<<endl;
	}
	return 0;
}

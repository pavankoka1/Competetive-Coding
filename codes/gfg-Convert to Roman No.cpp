#include <bits/stdc++.h>
using namespace std;
void convertToRoman(int ) ;
int main() {
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*you are required to complete 
this function*/

int getdig(int n){
    int i=0;
//    cout<<"in"<<endl;
    while(n>0){
        i++;
        n/=10;
    }
    return i;
}
void convertToRoman(int n) 
{
    while(n>0){
        int x=getdig(n);
        if(x==4){
        	
            int i=n/1000;
            for(int j=0;j<i;j++)
                cout<<"M";
            n-=i*1000;    
        }
        if(x==3){
            int i=n/100;
            if(i>0 && i<4){
                for(int j=0;j<i;j++)
                    cout<<"C";
            }
            if(i==4)
                cout<<"CD";
            if(i==5)
                cout<<"D";
            if(i==9)
                cout<<"CM";
            if(i>5 && i<9){
                cout<<"D";
                for(int j=0;j<i-5;j++)
                    cout<<"C";
            }
			n-=i*100;    
        }
        if(x==2){
            int i=n/10;
            if(i>0 && i<4){
                for(int j=0;j<i;j++)
                    cout<<"X";
            }
            if(i==4)
                cout<<"XL";
            if(i==5)
                cout<<"L";
            if(i==9)
                cout<<"XC";
            if(i>5 && i<9){
                cout<<"L";
                for(int j=0;j<i-5;j++)
                    cout<<"X";
            } 
			n-=i*10;   
        }
        if(x==1){
            int i=n;
 //           cout<<i<<" "<<n<<endl;
            if(i>0 && i<4){
                for(int j=0;j<i;j++)
                    cout<<"I";
            }
            if(i==4)
                cout<<"IV";
            if(i==5)
                cout<<"V";
            if(i==9)
                cout<<"IX";
            if(i>5 && i<9){
                cout<<"V";
                for(int j=0;j<i-5;j++)
                    cout<<"I";
            }    
            n-=i;
        }
    }
}

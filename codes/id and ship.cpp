#include<iostream>
using namespace std;

int main()
{
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		char c;
		cin>>c;
		if(c=='B')
			cout<<"BattleShip"<<endl;
		if(c=='b')
			cout<<"BattleShip"<<endl;
		if(c=='c')
			cout<<"Cruiser"<<endl;
		if(c=='C')
			cout<<"Cruiser"<<endl;
		if(c=='D')	
			cout<<"Destroyer"<<endl;
		if(c=='d')
			cout<<"Destroyer"<<endl;
		if(c=='f')
			cout<<"Frigate"<<endl;
		if(c=='F')
			cout<<"Frigate"<<endl;			
	}
	return 0;
}


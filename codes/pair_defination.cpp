#include<iostream>
#include<utility>
using namespace std;
int main(){
	pair<int ,int > ka = make_pair(12,67);
	cout<<ka.first<<" "<<ka.second<<endl;
	pair<pair<int,int >, int > ka1 = make_pair(make_pair(78,90),89);
	cout<<ka1.first.first<<" "<<ka1.first.second<<" "<<ka1.second;
	pair<pair<int,int >, pair<string,int> > ka2 = make_pair(make_pair(78,90),make_pair("sdjskd",90));
	int k;
	cin>>k;
	return 0;
}

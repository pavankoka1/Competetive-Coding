#include <iostream>
#include <fstream>
using namespace std;

int main () {
  fstream myfile;
  myfile.open ("in.txt");
  string ss;
  //cin>>ss;
  myfile<<"koka";
  myfile>>ss;
  cout<<ss;
  myfile.close();
  return 0;
}

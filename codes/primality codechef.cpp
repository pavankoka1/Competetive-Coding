#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <bitset>
#include <list>
#include <stdexcept>
#include <functional>
#include <utility>
#include <ctime>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MEM(a,b) memset((a),(b),sizeof(a))
const int INF = 100000007;
const LL N = 4e3 + 1;
const double eps = 1e-11;
 
int main()
{
	freopen("input.txt","r",stdin);
	//freopen("output.txt", "w", stdout);
	int a[] = { 1,2,5,10,50,100 };
	int m = 6;
	int ncase;
	cin >> ncase;
	while (ncase--)
	{
		int n;
		cin >> n;
		int flag = 1;
		for (int i = 2; i * i <= n; i++)
		{
			if (n%i == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag) puts("yes");
		else puts("no");
	}
	return 0;
 
 
}

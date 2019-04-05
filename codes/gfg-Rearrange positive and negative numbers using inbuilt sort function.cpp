#include <bits/stdc++.h>
using namespace std;
 
bool comp(int a, int b)
{
    // This is to maintain order
//    if ((a >= 0 && b >= 0) || (a < 0 && b < 0))
  //      return false;
 
    // No swapping required when one is 0
    if (a == 0)
        return true;
 
    // Swapping is must
    if ((a >= 0) && (b < 0))
        return false;
}
 
void rearrange(int arr[], int n)
{
    sort(arr, arr + n, comp);
}
 
// Driver code
int main()
{
    int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    for (int i = 0; i < n; i++)
        cout << " " << arr[i];
 
    return 0;
}

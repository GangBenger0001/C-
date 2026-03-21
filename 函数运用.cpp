#include<bits/stdc++.h>
using namespace std;
int max (int arr[],int b);
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i < n;i++) {
      cin >> arr[i];
    }
    cout << max(arr,n) << endl;
  return 0;
}
int max (int arr[],int b) { 
  int z = arr[0];
  for (int i = 0;i < b;i++) {
      if (arr[i] > z) {
        z = arr[i];
      }
  }
  return z;
}

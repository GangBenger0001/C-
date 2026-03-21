#include<bits/stdc++.h>
using namespace std;
int max (int arr[],int b);
//C++读代码是按顺序从上往下读，所以如果要将函数定义在main函数之后，则必须在main函数前先提及这个函数，不然编译时会报错，提示此函数不存在。
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

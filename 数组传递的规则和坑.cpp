#include<bits/stdc++.h>
using namespace std;
void func(int arr[]) {
    arr[0] = 100;
}
int main() {
    int a[3] = {1,2,3};
    func(a);
    //函数传递的是地址，不是传递数组本身，本质是指针传递(传递的是第一个元素的地址（指针），所以其实相当于传入的是入口地址)
    //函数内部无法知道数组长度
        /*void func(int arr[]) {
                cout << sizeof(arr); // ❌ 错误认知
          }
            这里输出的是8（64位系统）或4（32位），因为arr是int*，不是数组
          */
}






//正确传递数组的方式
//方法1：显式传长度（最常用）
// void func(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
// }









//     方法2：用引用传递整个数组（防退化，且可以获取长度）
//     void func(int (&arr)[5]) {
//              cout << sizeof(arr); // 正确：20
        // 这里 arr 仍然是数组！但缺点是必需写死数组大小（灵活性差）
//     }








//方法3：用模板（高级但优雅）
// template <typename T, size_t N>
// void func(T (&arr)[N]) {
//     cout << N << endl;
// }

// int a[10];
// func(a);  自动推导 N = 10

// 优点：

// 自动获取长度
// 不退化
// 泛用性强









//方法4：用 std::vector（现代C++推荐）
// #include <vector>
// using namespace std;
// void func(vector<int>& v) {
//     cout << v.size();
// }
//优点：
// 自带长度
// 更安全
// 不容易出错






//四、二维数组的坑（重点）
//void func(int arr[][3])  必须写列数
//或者
//void func(int (*arr)[3])
//原因：
//编译器需要知道每一行有多少列，才能计算偏移

#include <iostream>
// 必须包含这个头文件才能用 vector
#include <vector>
using namespace std;

int main() {
    // 1. 定义一个存储整数的 vector（空数组）
    vector<int> nums;
    
    // 2. 往里面加元素（自动扩容）
    nums.push_back(2);  // 现在 nums = [2]
    nums.push_back(7);  // 现在 nums = [2,7]
    nums.push_back(11); // 现在 nums = [2,7,11]
    
    // 3. 用下标访问（和普通数组一样）
    cout << nums[0] << endl;  // 输出 2
    cout << nums[1] << endl;  // 输出 7
    
    // 4. 获取元素个数（对应你代码里的 nums.size()）
    cout << nums.size() << endl;  // 输出 3
    
    // 5. 返回 vector（对应你代码里的 return {i,j}）
    vector<int> res = {0, 1};  // res = [0,1]
    return 0;
}
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0;i < n; i++) {
            for (int j = i + 1;j < n;j++) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
};
*/
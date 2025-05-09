// week12-5.cpp
// LeetCode 1920. Build Array from Permutation
// 用 for 迴圈，把陣列 ans[i] = nums[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size()); // C++陣列宣告 裡面是 nums 的 大小
        for(int i=0;i<nums.size();i++){
            ans[i] = nums[nums[i]]; // 題目說的
        }
        return ans;
    }
};

// week12-5.cpp
// LeetCode 1920. Build Array from Permutation
// �� for �j��A��}�C ans[i] = nums[nums[i]]
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size()); // C++�}�C�ŧi �̭��O nums �� �j�p
        for(int i=0;i<nums.size();i++){
            ans[i] = nums[nums[i]]; // �D�ػ���
        }
        return ans;
    }
};

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> mp;
    for (auto i : nums) {
      mp[i]++;
    }
    int temp, firstIndex, secondIndex;
    for (int i = 0; i < nums.size(); i++) {
      temp = target - nums[i];
      if (temp == nums[i] && mp[temp] < 2) {
        continue;
      }
      if (mp[temp]) {
        firstIndex = i;
        break;
      }
    }
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == temp) {
          secondIndex = i;
      }
    }
    return {firstIndex, secondIndex};
  }
};
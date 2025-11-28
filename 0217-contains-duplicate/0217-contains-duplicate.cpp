class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
            map<int, int> seen;
    for (int i = 0; i < nums.size();i++)
    {
        if (seen.contains(nums[i]))
        {
            return true;
        }
        else
        {
            seen[nums[i]] = 1;
        }
    }
    return false;
    }
};
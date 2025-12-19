class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int> newMap;
        for(int i = 0; i < nums.size(); i++)
        {
            newMap[nums[i]] += 1;
        }
        int max = 0;
        int maxKey;
        for(const auto& pair : newMap)
        {
            if (pair.second > max)
            {
                max = pair.second;
                maxKey = pair.first;
            }
        }
        return maxKey;
    }
};
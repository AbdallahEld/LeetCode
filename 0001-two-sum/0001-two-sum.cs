public class Solution {
    public int[] TwoSum(int[] nums, int target) {
       int diff;
       Dictionary<int,int> seen = new Dictionary<int,int>();
       for(int i = 0; i < nums.Length;i++)
       {
        diff = target - nums[i];
        if(seen.ContainsKey(diff))
        {
            return new int[] {seen[diff] , i};
        }
        else
        {
            seen[nums[i]] = i;
        }
       }
       return new int[] { };
    }
}
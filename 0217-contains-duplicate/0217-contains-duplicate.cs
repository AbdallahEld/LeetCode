public class Solution {
    public bool ContainsDuplicate(int[] nums) {
            Dictionary<int , int> isDublicate = new Dictionary<int , int>();

            for (int i = 0; i < nums.Length; i++)
            {
                if (isDublicate.ContainsKey(nums[i]))
                {
                    return true;
                }
                else
                {
                    isDublicate.Add(nums[i], 1);
                }
            }
            return false;
    }
}
public class Solution {
    public int[] GetConcatenation(int[] nums) {
        int[] newNums = new int[nums.Length * 2];
        int j = 0;
        for (int i = 0; i < newNums.Length;i++) 
        {
            if ( i == newNums.Length - nums.Length) {
                j = 0;
            }
            newNums[i] = nums[j];
            j++;
        }
        return newNums;
    }
}
public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        Dictionary <int,int> frequency = new Dictionary<int,int>();
        for (int i = 0; i < nums.Length; i++)
        {
            if (frequency.ContainsKey(nums[i]))
            {
                frequency[nums[i]]++;
            }
            else
            {
                frequency[nums[i]] = 1;
            }
        }
        PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
        foreach(var item in frequency)
        {
            pq.Enqueue(item.Key, item.Value);
            if (pq.Count > k)
                pq.Dequeue();
        }
        int[] result = new int[k];
        for(int i =0; i < k; i++)
        {
            result[i] = pq.Dequeue();
        }
        return result;
    }
}
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
int begin = 0;
int end = nums.size() - 1;
int count = 0;

while (begin < end)
{
	int sum = nums[begin] + nums[end];
	if(sum == k)
	{
		count++;
		begin++;
		end--;
	}
	else if (sum < k)
	{
		begin++;
	}
	else
	{
		end--;
	}
}

return count;
    }
};
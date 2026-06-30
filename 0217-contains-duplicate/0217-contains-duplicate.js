/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let isDuplicate = new Map();

for (let i = 0; i < nums.length; i++) {
    if (isDuplicate.has(nums[i])) {
        return true;
    } else {
        isDuplicate.set(nums[i], 1);
    }
}

return false;
};
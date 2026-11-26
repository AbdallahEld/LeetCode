# @param {Integer[]} nums
# @param {Integer} k
# @return {Integer[]}
def top_k_frequent(nums, k)
    frequency = Hash.new(0)
    
    nums.each do |num|
      frequency[num] += 1
    end

    pq = []

    frequency.each do |num, count|
      pq.push([count, num])

      pq.sort_by! { |item| item[0] }

      pq.shift if pq.length > k
    end

    pq.map { |item| item[1] }
end
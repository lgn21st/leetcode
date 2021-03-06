# Given an array of integers, find two numbers such that they add up to a specific target number.
#
# The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
#
# You may assume that each input would have exactly one solution.
#
# Input: numbers={2, 7, 11, 15}, target=9
# Output: index1=1, index2=2

class Solution
  # return a array, [index1, index2]
  def two_sum(numbers, target)
    # brute_force(numbers, target)
    hash_table(numbers, target)
  end

  def brute_force(numbers, target)
    [].tap do |result|
      numbers.each_with_index do |n, i|
        numbers[i+1..-1].each_with_index do |m, j|
          result << i + 1 << i + 1 + j + 1 if target - n == m
        end
      end
    end
  end

  def hash_table(numbers, target)
    [].tap do |result|
      hash = {}
      numbers.each_with_index do |n, i|
        if j = hash[target - n]
          return result << j + 1 << i + 1
        end
        hash[n] = i
      end
    end
  end
end

if __FILE__ == $0
  numbers = [2, 7, 11, 15]
  target  = 9

  p Solution.new.two_sum numbers, target
end

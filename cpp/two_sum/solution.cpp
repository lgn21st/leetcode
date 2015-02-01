/*
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 *
 * The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Input: numbers={2, 7, 11, 15}, target=9
 * Output: index1=1, index2=2
 */

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        map<int, int> m;
        vector<int> result;
        for (int i = 0; i < numbers.size(); i++) {
            // not found the second one
            if (m.find(numbers[i]) == m.end()) {
                // store the first one position into the second one's key
                m[target - numbers[i]] = i;
            } else {
                // found the second one
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
                break;
            }
        }
        return result;
    }
};

int main()
{
    Solution s1;
    static const int arr[] = {2, 7, 11, 15};
    vector<int> numbers (arr, arr + sizeof(arr) / sizeof(arr[0]));
    int target = 9;

    vector<int> output = s1.twoSum(numbers, target);
    cout << output[0] << " " << output[1] << endl;

    return 0;
}

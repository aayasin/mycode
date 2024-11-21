#include <iostream>
#include <vector>

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

class Solution {
public:
    vector<int> twoSum_n2(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
            for (int j = 1; j < nums.size(); j++)
                if ((nums[i] + nums[j]) == target) {
                    return vector<int>{i, j};
                }
        return {};
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        for (int i = 0, j = nums.size() - 1; j > i;) {
            int s = nums[i] + nums[j];
            if (s == target)
                return vector<int>{i, j};
            else if (s < target)
                i++;
            else
                j--; // s > target
        }
        return {};
    }

    void print(vector<int>& nums) {
        std::cout << '[] ' for (int i = 0; i < nums.size(); i++) std::cout
                  << nums[i] << " ";
        std::cout << ' ]' << std::endl;
    }
};

#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>&, int);

int main() {
    std::vector<int> nums{ 3, 3, 8, 5, 6, 3, 9 };
    int target = 15;

    std::vector<int> result = twoSum(nums, target);

    for (auto i = 0; i < result.size(); ++i) {
        std::cout << result.at(i) << ' ';
    }
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> indexs;
    for (auto i = 0; i < nums.size(); ++i) {
        for (auto j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                indexs.push_back(i);
                indexs.push_back(j);
            }
        }
    }
    return indexs;
}
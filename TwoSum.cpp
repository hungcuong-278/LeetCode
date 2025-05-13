#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; // value -> index
        
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Nếu tìm thấy complement trong map
            if(map.find(complement) != map.end()) {
                return {map[complement], i};
            }
            
            // Nếu không tìm thấy, thêm số hiện tại vào map
            map[nums[i]] = i;
        }
        
        return {}; // Không tìm thấy cặp số thỏa mãn
    }
};

// Hàm để in vector
void printVector(const vector<int>& v) {
    cout << "[";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
        if(i < v.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    
    // Test case 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    cout << "Test case 1:\n";
    cout << "Input: nums = [2,7,11,15], target = 9\n";
    cout << "Output: ";
    printVector(solution.twoSum(nums1, target1));
    
    // Test case 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    cout << "\nTest case 2:\n";
    cout << "Input: nums = [3,2,4], target = 6\n";
    cout << "Output: ";
    printVector(solution.twoSum(nums2, target2));
    
    // Test case 3
    vector<int> nums3 = {2,3,4};
    // Chú ý: Để test trường hợp có nhiều cặp số thỏa mã
    int target3 = 6;
    cout << "\nTest case 3:\n";
    cout <<     "Input: nums = [2,3,4], target = 6\n";
    cout << "Output: ";
    printVector(solution.twoSum(nums3, target3));
    
    // Test case với số âm
    vector<int> nums4 = {-1, -2, -3, -4, -5};
    int target4 = -8;
    cout << "\nTest case 4:\n";
    cout << "Input: nums = [-1,-2,-3,-4,-5], target = -8\n";
    cout << "Output: ";
    printVector(solution.twoSum(nums4, target4));
    
    return 0;
}

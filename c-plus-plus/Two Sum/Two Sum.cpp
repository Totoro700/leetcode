class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int a=0;a<sizeof(nums);a++) {
			for (int b=1;b<sizeof(nums);b++) {
				if (nums[a] + nums[b] == target) {
					return [a, b];
				}
			}
		}
		return [];
    }
};

int main() {
	
	// Example 1
	Solution::twoSum([2, 7, 11, 15], 9);
	
	// Example 2
	Solution::twoSum([3, 2, 4], 6);
	
	// Example 3
	Solution::twoSum([3, 3], 6);
}
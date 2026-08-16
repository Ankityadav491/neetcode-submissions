class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(),nums.end());
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};
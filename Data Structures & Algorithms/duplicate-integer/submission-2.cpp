class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //int k=nums.size();
        for(int i=0;i<nums.size();i++){
            for(int j=00;j<i;j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
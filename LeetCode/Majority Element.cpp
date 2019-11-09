class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int majority_element = 0;
        
        if(nums.size() == 1) return nums[0];
        
        for(auto n : nums) {
            if(mp.find(n) == mp.end()) {
                mp[n] = 1;
            } 
            else {
                if(++mp[n] > floor(nums.size()/2)) {
                    majority_element = n;   
                }
            }
        }
        return majority_element;
    }
};
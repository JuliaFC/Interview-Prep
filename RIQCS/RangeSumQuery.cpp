class NumArray {
public:
    vector<int> memo;
    
    void computeSums(vector<int>& memo, const vector<int> nums) {
	memo.push_back(0);
	int acc_sum = 0;
        
	for(int i=0; i<nums.size(); i++){
		acc_sum += nums[i];
		memo.push_back(acc_sum);
    }
}
        
   NumArray(vector<int> nums) {
        computeSums(memo, nums);
    }
    
    int sumRange(int i, int j) {
	    return memo[j+1] - memo[i];
    }    

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */
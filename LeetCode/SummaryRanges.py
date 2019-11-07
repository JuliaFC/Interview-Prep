class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        start = 0
        idx_map = []
        res = []
        
        if(not nums): return []
        
        for s in range(0, len(nums)-1):
            if(nums[s+1] - nums[s] > 1):
                idx_map.append((start, s))
                start = s+1
        idx_map.append((start, len(nums)-1))
        
        for i in idx_map:  
            start = str(nums[i[0]])
            end = str(nums[i[1]])
            if(start != end):
                res.append(start + "->" + end)
            else:
                res.append(start)
        return res
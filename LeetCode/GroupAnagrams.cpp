class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> res;
        vector<string> group;
        int i = 0;
        
        for(auto s : strs) {
            sort(s.begin(), s.end());
            m[s].push_back(strs[i++]);            
        }
        
        for(auto s : m){
            res.push_back(s.second);
        }
        return res;
    }
};
class Solution {
public:
    int tribonacci(int n) {
        if (n < 2) return n;
        
        int t[3] = {0, 1, 1}, tmp = t[0] + t[1] + t[2];
        
        while (n-- > 2) {
            tmp = t[0] + t[1] + t[2], t[0] = t[1], t[1] = t[2], t[2] = tmp;
        }
        return t[2];
    }
};
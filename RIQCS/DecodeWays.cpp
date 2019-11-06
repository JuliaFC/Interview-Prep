class Solution {
public:
    int numDecodings(string s) {
    if (!s.size() || s.front() == '0') return 0;

    int first = 1, second = 1;

    for (int i=1; i<s.size(); i++) {
        if (s[i] == '0') first = 0;
        
        if (s[i - 1] == '1' || s[i - 1] == '2' && s[i] <= '6') {
            first = second + first;
            second = first - second;
        }

        else {
            second = first;
        }
    }

    return first;
}
};
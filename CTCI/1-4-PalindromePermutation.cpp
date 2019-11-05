// 1.4 Cracking the Code Interview
#include <iostream>
#include <vector>
using namespace std;

bool palindromePermutation(string s) {

vector<int> char_map(256, 0);
int oddN = 0;

if(s.size() > 256) return false;

for(auto c : s) {
    if(++char_map[c - '0'] % 2 != 0) {
        oddN++;
    } 
    else {
        oddN--;
    }
}

if(oddN > 1) {
    return false;
}
return true;
}

int main() 
{ 
    cout << palindromePermutation("tacocat");
    return 0; 
} 
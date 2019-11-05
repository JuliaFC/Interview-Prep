// 1.1 Cracking the Code Interview
#include <iostream>
#include <vector>
using namespace std;

bool isUnique(string s) {

vector<int> char_map(256, 0);

if(s.size() > 256) return false;

for(auto c : s) {
    if(++char_map[c - '0'] > 1) {
        return false;
    }
}
return true;
}

int main() 
{ 
    cout << isUnique("numa numa ei");
    return 0; 
} 
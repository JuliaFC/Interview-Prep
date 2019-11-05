// 1.1 Cracking the Code Interview
#include <iostream>
#include <vector>
using namespace std;

bool isUnique(string s) {

vector<int> char_map(26, 0);

for(auto c : s) {
    if(++char_map[c - 'a'] > 1) {
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
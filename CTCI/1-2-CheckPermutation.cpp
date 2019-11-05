// 1.2 Cracking the Code Interview
#include <iostream>
#include <vector>
using namespace std;

bool checkPermutation(string s, string t) {

vector<int> char_map(26, 0);

for(auto c : s) {
    char_map[c - 'a']++;
}

for(auto c : t) {
    char_map[c - 'a']--;

    if(char_map[c - 'a'] < 0) {
        return false;
    }
}

for(auto i : char_map) {
    if(i > 0) {
        return false;
    }
}
return true;

}


int main() 
{ 
    cout << checkPermutation("numa numa ei", "numa numa numa ei");
    return 0; 
} 
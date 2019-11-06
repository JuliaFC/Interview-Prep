// 1.6 Cracking the Code Interview
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

string stringCompression(string s) {

string comp;
int total_letters = 1;

for(int i=1; i<s.size(); i++) {
    if(s[i-1] == s[i]) {
        total_letters++;
    } else {
        comp = comp + s[i-1] + to_string(total_letters);
        total_letters = 1;
    }
}

if(total_letters != 0) {
     comp = comp + s[s.size()-1] + to_string(total_letters);
}

return comp.size() < s.size() ? comp : s;
}

int main() 
{ 
    cout << stringCompression("aabcccccaaa");
    cout << stringCompression("ababab");

    return 0; 
} 
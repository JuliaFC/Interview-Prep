// 1.6 Cracking the Code Interview
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  
using namespace std;

bool stringRotation(string s1,  string s2) {

string all_rotations = s1 + s1;
return all_rotations.find(s2) != std::string::npos;
}

int main() 
{ 
    cout << stringRotation("waterbottle", "erbottlewat");

    return 0; 
} 
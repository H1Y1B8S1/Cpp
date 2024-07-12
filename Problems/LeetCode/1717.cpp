#include <iostream>
#include <string>

using namespace std;

int maximumPoints(string s, int x, int y) {
    int score = 0;
    int ab_count = 0;
    int ba_count = 0;
    int i = 0;
    int n = s.length();
    
    // Counting occurrences of "ab" and "ba"
    while (i < n - 1) {
        if (s.substr(i, 2) == "ab") {
            ab_count++;
            i += 2;
        } else if (s.substr(i, 2) == "ba") {
            ba_count++;
            i += 2;
        } else {
            i++;
        }
    }
    
    // Add points based on counts
    score = ab_count * x + ba_count * y;
    
    return score;
}

int main() {
    cout << maximumPoints("cdbcbbaaabab", 4, 5) << endl; // Output: 19
    cout << maximumPoints("aabbaaxybbaabb", 5, 4) << endl; // Output: 20
    
    return 0;
}

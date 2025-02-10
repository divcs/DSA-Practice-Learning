#include <bits/stdc++.h>
using namespace std;

// Function to check if the string is the same as its reflection in the mirror
bool isReflectionEqual(string &s) {
    unordered_set<char> mirror_chars = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
    int n = s.length();
    
    for (int i = 0; i < n / 2; i++) {
        if (mirror_chars.find(s[i]) == mirror_chars.end() || s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    
    // Checking the middle character for odd-length strings
    if (n % 2 == 1 && mirror_chars.find(s[n / 2]) == mirror_chars.end()) {
        return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        if (isReflectionEqual(S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

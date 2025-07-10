#include <iostream>
#include <vector>
using namespace std;

string reformatString(string S, int K) {
    string alphanumeric = "", result = "";
    
    // Remove dashes and convert to uppercase
    for (char c : S) {
        if (c != '-') alphanumeric += toupper(c);
    }
    
    int n = alphanumeric.size();
    if (n == 0) return "";  // Edge case: empty input
    
    // Find the size of the first group
    int firstGroupSize = n % K;
    if (firstGroupSize == 0) firstGroupSize = K;

    // Construct the result string
    int index = 0;
    result += alphanumeric.substr(index, firstGroupSize);
    index += firstGroupSize;

    while (index < n) {
        result += '-';
        result += alphanumeric.substr(index, K);
        index += K;
    }

    return result;
}

// Driver Code
int main() {
    int T;
    cin >> T;
    while (T--) {
        int K;
        string S;
        cin >> K >> ws; // Read K and ignore leading whitespaces
        getline(cin, S);
        
        cout << reformatString(S, K) << endl;
    }
    return 0;
}

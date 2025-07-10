#include <iostream>
// #include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
     unordered_map<char,int>alpha(256,0);
     int substrLen = 0;

     int n = s.length();

     while(n){
        string substr;
        for(int i = 0; i < n; i++){
            if(s[i] == 0){
                substr += s[i];
                cout<<substr;
                alpha[s[i]]++;
            }else if(s[i] == 1){

            }
        }
        return 1;
     }     } 

int main(){
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}
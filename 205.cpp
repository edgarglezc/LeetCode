#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        vector<bool> checked(26,false);

        for(int i = 0; i < s.length(); i++) {
            if(!m.count(s[i])) {
                for(auto x : m) {
                    if(x.second == t[i]) return false;
                }
                m[s[i]] = t[i];
            }
        }

        string match = "";
        for(int i = 0; i < s.length(); i++) {
            match += m[s[i]];
        }

        return t == match;
    }
};

int main() {
    Solution sol;

    string s1, s2;
    cin >> s1 >> s2;
    cout << sol.isIsomorphic(s1, s2) << endl;

    return 0;
}
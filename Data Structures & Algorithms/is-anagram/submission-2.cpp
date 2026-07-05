class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        std::unordered_map<char,int> S;
        for (char c : s) {
            if (S.find(c) != S.end()) S[c] += 1;
            else S[c] = 1;
        }
        std::unordered_map<char,int> T;
        for (char c : t) {
            if (T.find(c) != T.end()) T[c] += 1;
            else T[c] = 1;
        }

        return S == T;
    }
};


// https://leetcode.com/problems/first-unique-character-in-a-string/

// Brute force solution, traverse string s 2 times. First time, store counts of every character into the hash table, second time, find the first character that appears only once.

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;
        for (char& c : s) {
            m[c]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) return i;
        }
        return -1;
    }
};
// if the string is extremely long, we wouldn't want to traverse it twice, so instead only storing just counts of a char, we also store the index, and then traverse the hash table.

class Solution {
public:
	int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> m;
        int idx = s.size();
        for (int i = 0; i < s.size(); i++) {
            m[s[i]].first++;
            m[s[i]].second = i;
        }
        for (const auto& [c, p] : m) {
            if (p.first == 1) {
                idx = min(idx, p.second);
            }
        }
        return idx == s.size() ? -1 : idx;
    }
};

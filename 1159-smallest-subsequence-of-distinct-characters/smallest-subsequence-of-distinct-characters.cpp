class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char, int> lastIndex;
        for (int idx = 0; idx < s.size(); idx++) {
            lastIndex[s[idx]] = idx;
        }
        stack<char> charStack;
        unordered_set<char> usedChar;

        for (int idx = 0; idx < s.size(); idx++) {
            char currChar = s[idx];

            if (usedChar.count(currChar)) {
                continue;
            }

            while (!charStack.empty() &&
                   charStack.top() > currChar &&
                   lastIndex[charStack.top()] > idx) {

                usedChar.erase(charStack.top());
                charStack.pop();
            }
            charStack.push(currChar);
            usedChar.insert(currChar);
        }

        string currStack;
        
        while (!charStack.empty()) {
            currStack += charStack.top();
            charStack.pop();
        }

        reverse(currStack.begin(), currStack.end());

        return currStack;
    }
};
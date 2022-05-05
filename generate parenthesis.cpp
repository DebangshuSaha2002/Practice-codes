class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string word;
        backtrack(n, 0, 0, word, res);
        return res;
    }
private:
    void backtrack(int n, int open, int close, string& word, vector<string>& res) {
        
        if (word.size() == n + n) {
            res.push_back(word);
            return;
        }
        for (int i = open; i < n; ++i) {
             word += '(';
            backtrack(n, i + 1, close, word, res);
            word.pop_back();
        }
        for (int i = close; i < open; ++i) {
             word += ')';
            backtrack(n, open, i + 1, word, res);
            word.pop_back();
        }
    }
};
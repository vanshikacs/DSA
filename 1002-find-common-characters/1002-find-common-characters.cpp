class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        int common[26];

        for(int i = 0; i < 26; i++)
            common[i] = 1000;

        for(string word : words) {

            int count[26] = {0};

            for(char ch : word) {
                count[ch - 'a']++;
            }

            for(int i = 0; i < 26; i++) {
                common[i] = min(common[i], count[i]);
            }
        }

        vector<string> ans;

        for(int i = 0; i < 26; i++) {

            while(common[i] > 0) {

                ans.push_back(string(1, 'a' + i));

                common[i]--;
            }
        }

        return ans;
    }
};
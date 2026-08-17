class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> count;

        for(int x : arr) {
            count[x]++;
        }

        unordered_set<int> frequencies;

        for(auto p : count) {

            if(frequencies.count(p.second))
                return false;

            frequencies.insert(p.second);
        }

        return true;
    }
};
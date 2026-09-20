class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>freq;

        for(int i = 0; i<arr.size(); i++){
          freq[arr[i]]++;
        }
        unordered_set<int>st;

        for(auto & it: freq){
         int mp = it.second;
           if(st.find(mp) != st.end()) return false;

           st.insert(mp);
        }
        return true;
    }
};
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        unordered_map<int , int>freq;

        for(int &num : nums){
            result += freq[num];
            freq[num]++;
        }
        return result;
    }
};


                             //optimal approach(Hashmap)      
// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
//         int n = nums.size();
//         unordered_map<int , int>freq;
        
//         for(int & num : nums){
//             freq[num]++;
//         }

//         int result = 0;

//         for(auto &it : freq){
//             int count = it.second;

//             result += (count * (count-1))/2;
//         }
//         return result;
//     }
// };



                             //Brute force
// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
//         int n = nums.size();
//         int pair = 0;

//         for(int i = 0; i<n; i++){
//            for(int j = i+1; j<n;j++){
//             if(nums[i]==nums[j]){
//                 pair++;  
//             }
//            } 
//         }
//         return pair;
//     }
// };
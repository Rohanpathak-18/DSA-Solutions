class Solution {
public:

int M = 1e9+7;

int rev(int num){
    int ans = 0;
while (num > 0) {
    int digit = num % 10;  // Get the last digit
    ans = ans * 10 + digit; // Add digit to reverse
    num = num / 10;  // Remove the last digit
}
return ans;
}


int countNicePairs(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int>mp;
   
   for(int i = 0; i<n; i++){
    nums[i]=nums[i]-rev(nums[i]);
   }
int result = 0;

for(int i =0; i<n; i++){
    result = (result + mp[nums[i]])%M;


    mp[nums[i]]++;

}
return result;

    }
};
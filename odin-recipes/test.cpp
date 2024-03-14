class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int N = nums.size();
        int lo = 0;
        while(lo < N && nums[lo] < 0){
            lo++;
        }
        int hi = lo - 1; 

        vector<int> ans(N);
        int cur = 0; 
        
        while(hi >= 0 && lo < N){
            if(nums[hi]*nums[hi] < nums[lo]*nums[lo]){
                ans[cur++] = nums[hi]*nums[hi];
                hi--;
            } else{
                ans[cur++] = nums[lo]*nums[lo];
                lo++;
            }
        }
        
        while(hi >= 0){
            ans[cur++] = nums[hi]*nums[hi];
            hi--;
        }
        
        while(lo < N){
            ans[cur++] = nums[lo]*nums[lo];
            lo++;
        }
        return ans;
    }
};
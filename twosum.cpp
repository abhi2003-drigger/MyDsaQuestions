class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int k=i+1;
            int sum=nums[i];
            while(k<nums.size()){
                if(sum+nums[k]==target){
                    ans.push_back(i);
                    ans.push_back(k);
                    break;
                }
                k++;

            }
           
            
        }
        return ans;
    }
            
};
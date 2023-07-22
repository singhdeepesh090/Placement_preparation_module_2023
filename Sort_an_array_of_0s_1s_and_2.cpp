class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        
        int temp;
        for(int i=0;i<nums.size();i++){
            
            for(int j=i+1;j<nums.size();j++){

                if(nums[j]<nums[i]){
                    
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;

                }
            }
            
        }
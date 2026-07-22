class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        int i=0,j=1;
        int temp;
        while(j<l)
        {
            if(nums[i]==0 && nums[j]!=0)
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j++;
            }
            else if(nums[i]==0 && nums[j]==0)
            {
                j++;
            }
            else if(nums[i]!=0 && nums[j]!=0)
            {
                i++;
                j++;
            }
            else if(nums[i]!=0 && nums[j]==0)
            {
                i++;
                j++;
            }
        }
    }
};
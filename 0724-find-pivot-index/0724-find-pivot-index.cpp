class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=std::size(nums);
        int left_sum=0,right_sum=0;
        int pivot_index=0;
        int value=0;
        while(pivot_index<l)
        {
            for(int i=0;i<pivot_index;i++)
            {
                left_sum+=nums[i];
            }
            for(int i=pivot_index+1;i<l;i++)
            {
                right_sum+=nums[i];
            }
            if(left_sum==right_sum)
            {
                return pivot_index;
            }
            else{
                pivot_index++;
                left_sum=0;
                right_sum=0;
            }
        }
        return -1;
    }
};
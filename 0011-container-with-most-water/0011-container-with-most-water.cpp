class Solution {
public:
    int maxArea(vector<int>& height) {
    int l=std::size(height);
    int i=0,j=l-1;
    int max_water=0;
    while(i<j)
    {
        int current_height=std::min(height[i],height[j]);
        int width=j-i;
        max_water=std::max(max_water,current_height*width);
        if(height[i]>height[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return max_water;
    }
};
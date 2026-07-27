class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int l=std::size(gain);
        int current_altitude=0;
        int max_altitude=0;
        for(int i=0;i<l;i++)
        {
            current_altitude+=gain[i];
            max_altitude=std::max(max_altitude,current_altitude);
        }
        return max_altitude;
    }
};
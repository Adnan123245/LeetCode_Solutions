class Solution {
public:
    string removeStars(string s) {
        std::string a="";
        for(char c:s)
        {
            if(c=='*')
            {
                a.pop_back();
            }
            else{
                a.push_back(c);
            }
        }
        return a;
    }
};
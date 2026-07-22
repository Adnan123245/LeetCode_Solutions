class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1=s.length();
        int l2=t.length();
        int i=0,j=0;
        while(i<l1 && j<l2)
        {
            char a=s[i];
            char b=t[j];
            if(a==b)
            {
                i++;
                j++;
            }
            else if(a!=b)
            {
                j++;
            }
        }
        return i==l1;
    }
};
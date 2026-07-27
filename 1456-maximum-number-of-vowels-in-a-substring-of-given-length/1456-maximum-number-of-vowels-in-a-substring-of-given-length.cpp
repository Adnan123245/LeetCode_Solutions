class Solution {
public:
    int maxVowels(string s, int k) {
        int l=s.length();
        int current_vowel_count=0;
        for(int i=0;i<k;i++)
        {
            char a=s[i];
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            {
                current_vowel_count++;
            }
        }
        int max_vowel_count=current_vowel_count;
        for(int i=k;i<l;i++)
        {
            char a=s[i];
            if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            {
                current_vowel_count++;
            }
            char b=s[i-k];
            if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
            {
                current_vowel_count--;
            }
            max_vowel_count=std::max(max_vowel_count,current_vowel_count);
        }
        return max_vowel_count;
    }
};
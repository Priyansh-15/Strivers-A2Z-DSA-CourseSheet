class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' and s[i]<='z')
                temp+=s[i];
            if(s[i]>='A' and s[i]<='Z')
                temp+=s[i]-'A'+'a';
            if(s[i]>='0' and s[i]<='9')
                temp+=s[i];
        }
        int l=0,h=temp.length()-1;
        while(l<=h)
        {
            if(temp[l]!=temp[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
};

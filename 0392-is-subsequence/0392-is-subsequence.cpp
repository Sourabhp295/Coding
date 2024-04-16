class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tn = t.size();
        int sn = s.size();
        int j = 0;
        for(int i = 0;i<tn && j<sn;i++){
            if(s[j] == t[i]){
                j++;
            }
        }
        return (j==sn);
    }
};
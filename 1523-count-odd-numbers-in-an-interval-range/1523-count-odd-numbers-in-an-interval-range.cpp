class Solution {
public:
    int countOdds(int low, int high) {
        int s=high-low;
        s=s/2+max(low%2,high%2);
        return s;
    }
};
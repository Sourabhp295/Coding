class Solution {
public:
    int divide(int divid, int divis) {
        if(divid==INT_MIN && divis==-1){
            return INT_MAX;
        }
        return (int)(divid/divis);
    }
};
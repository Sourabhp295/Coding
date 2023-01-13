class Solution {
public:
    int divide(int divid, int divis) {
        if(divid==-2147483648 && divis==-1){
            return INT_MAX;
        }
        return (int)(divid/divis);
    }
};
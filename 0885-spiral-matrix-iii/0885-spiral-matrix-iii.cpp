class Solution {
public:
bool isValid(int rows,int cols,int i,int j){
    if(i>=0 && j>=0 && i<rows && j<cols) return true;
    return false;
}
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int gap=1; // denoting gap as seen in image
        vector<vector<int>> ans;
        while(gap<= 200){ // for safer side we go till 200
            
            for(int i=cStart;i<gap+cStart;i++){
                if(isValid(rows,cols,rStart,i))
                ans.push_back({rStart,i}); // traverse in row left to right
            }
            cStart= gap+cStart;
            for(int i=rStart;i<gap+rStart;i++){
                if(isValid(rows,cols,i,cStart)){
                    ans.push_back({i,cStart}); // traverse in col from top to bottom side
                }
            }
            rStart=rStart+gap;
            gap++;  // increase gap as observe from image
            for(int i=cStart;i>cStart-gap;i--){
                if(isValid(rows,cols,rStart,i)){
                    ans.push_back({rStart,i}); // traverse in row from right to left
                }
            }
            cStart=cStart-gap;
            for(int i=rStart;i>rStart-gap;i--){
                if(isValid(rows,cols,i,cStart)){
                    ans.push_back({i,cStart}); // traverse in col from bottom to top side
                }
            }
            rStart= rStart-gap;
            gap++;
        }
        return ans;
    }
};
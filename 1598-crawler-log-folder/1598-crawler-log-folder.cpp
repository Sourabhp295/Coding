class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(auto it: logs){
            if(it== "../"){
                if (count > 0){
                    count--;
                }
            }
            else if(it != "./"){
                count++;
            }
        }
        return count;
    }
};
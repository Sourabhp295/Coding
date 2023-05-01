class Solution {
public:
    double average(vector<int>& salary) {
        double n=salary.size();
        double sum=0;
        double count=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<n-1;i++){
            sum +=salary[i];
            count++;
        }
        return sum/count;
    }
};
class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        vector<int>v5;
        if(n==0){
            //for(int i=0;i<m;i++){
             //   v5.push_back(v1[i]);
            //}
            v1=v1;
           
        }
        if(m==0){
            //for(int i=0;i<n;i++){
               // v5.push_back(v2[i]);
            
            
           // }
            //v1=v5;
            v1=v2;
            
        }
        
        vector<int> v3;
        for(int i=0;i<m;i++){
            v3.push_back(v1[i]);
        }
        vector<int> v4;
        for(int i=0;i<n;i++){
            v4.push_back(v2[i]);
        }
        
        int a=0;
        int b=0;

        while(a<m && b<n){
            if(v3[a]>=v4[b]){
                v5.push_back(v4[b]);
                b++;
            }
            else{
                v5.push_back(v3[a]);
                a++;
            }
        }
        while(a<m){
            v5.push_back(v3[a]);
            a++;
        }
        while(b<n){
            v5.push_back(v4[b]);
            b++;
        }
        v1=v5;
         
    }
};
//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<pair<int,int>> v;
        int count=0;
        int value=0;
        vector<int> ans;
        priority_queue<int> pq;
        vector<pair<int,int>> flag;
        // int flag=0;
        for(int i = 0;i<n;i++){
            v.push_back({arr[i].dead,arr[i].profit});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        flag.push_back({v[0].first,1});
        int j = 0;
        for(int i =1;i<n;i++){
            if(v[i].first!=flag[j].first){
                flag.push_back({v[i].first,1});
                flag[j].second = flag[j].first-v[i].first;
                j++;
            }
        }
        if(flag[flag.size()-1].first!=1){
            int n2 = flag.size();
            flag.push_back({1,
                flag[n2-1].first-1
            });
        }
        j = 0;
        int i =0;
        while(i<v.size() && j<flag.size()){
            if(v[i].first==flag[j].first){
                pq.push(v[i].second);
                // pushed =true;
                count++;
                value+=pq.top();
                pq.pop();
                flag[j].second--;
                if(flag[j].second==0){
                    j++;
                }
            }else if(v[i].first<flag[j].first){
                while(!pq.empty() && flag[j].second!=0){
                    count++;
                    value+=pq.top();
                    pq.pop();
                    flag[j].second--;
                }
                j++;
                i--;
            }else if(v[i].first>flag[j].first){
                pq.push(v[i].second);
            }
            i++;
        }
        
        while(j<flag.size() && !pq.empty()){
            count++;
            value+=pq.top();
            pq.pop();
            flag[j].second--;
            if(flag[j].second==0){
                j++;
            }
        }
        ans={count,value};
        return ans;
    }
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends
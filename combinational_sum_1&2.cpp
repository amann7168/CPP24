/*COMBINATIONAL SUM 1 :The same number may be chosen
from the array an unlimited number of times*/

class Solution {
public:
void func(int ind,int target,vector<int>&arr,vector<vector<int >>&ans,vector<int> &ds){
    if(ind==arr.size()){
        if(target==0){
            ans.push_back(ds);

        }
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        func(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();

    }

    func(ind+1,target,arr,ans,ds);

}

1
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int >>ans;
        vector<int>ds;
        func(0,target,candidates,ans,ds);
        return ans;
    }
}; 






//============================================================
//============================================================
//============================================================
//============================================================


/* COMBINATIONAL SUM 2 : Each number in candidates may 
only be used once in the combination.*/



class Solution {
    public: 
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds) {
        if(target==0) {
            ans.push_back(ds);
            return;
        }        
        for(int i = ind;i<arr.size();i++) {
            if(i>ind && arr[i]==arr[i-1]) continue; 
            if(arr[i]>target) break; 
            ds.push_back(arr[i]);
            findCombination(i+1, target - arr[i], arr, ans, ds); 
            ds.pop_back(); 
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans; 
        vector<int> ds; 
        findCombination(0, target, candidates, ans, ds); 
        return ans; 
    }
};

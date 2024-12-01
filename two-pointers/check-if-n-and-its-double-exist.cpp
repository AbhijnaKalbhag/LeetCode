class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int>s(arr.begin(),arr.end());
        for(int num:s){
            if(s.find(2*num)!=s.end()){
                return true;
            }
        }
        return false;
    }
};
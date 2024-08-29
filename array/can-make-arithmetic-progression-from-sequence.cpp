class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
     sort(arr.begin(),arr.end());
     if(arr.size()==2){return 1;}
     int k=arr[1]-arr[0];
     for(int i=1;i<arr.size()-1;i++)
     {
        if(arr[i+1]-arr[i]!=k){ return 0;}
     }   
     return 1;
    }
};
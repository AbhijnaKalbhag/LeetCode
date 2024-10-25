class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>ans;
        sort(folder.begin(),folder.end());
        string prev;
        for(auto s:folder){
            if(!prev.empty() && s.find(prev)==0 && s[prev.length()]=='/'){
                continue;
            }
            ans.push_back(s);
            prev=s;
        }
        return ans;
    }
};
class Solution {
public:
    int calPoints(vector<string>& operations) {
       int sum=0,val;
       vector<int> a;
       for(auto it:operations)
       {
          if(it=="+")
          {
              val=a[a.size()-1]+a[a.size()-2];
              sum+=val;
              a.push_back(val);
          }
          else if(it=="D")
          {
              val=2*a.back();
              sum+=val;
              a.push_back(val);
          }
          else if(it=="C")
          {
             sum-=a.back();
             a.erase(a.end()-1);
          }
          else
          {
             val=stoi(it);
             sum+=val;
             a.push_back(val);
          }

       }
       return sum; 
    }
};
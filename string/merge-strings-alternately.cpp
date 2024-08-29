class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       string a;
       a.resize(word1.length()+word2.length());
       int j=0,o=0,t=0,i;
      int n=min(word1.length(),word2.length());
        for(i=0;i<n;i++)
        {      
            a[2*j]=word1[i];o++;
            a[2*j+1]=word2[i];t++;
            j++;
        }
        j=2*n;
        if(word1.length()==word2.length())
        {
            return a;
        }
      else if(word1.length()>word2.length())
       {
           for(i=o;i<word1.length();i++)
           {
               a[j]=word1[i];
               j++;
           }
       }
       else
       {
            for(i=t;i<word2.length();i++)
           {
               a[j]=word2[i];
               j++;
           }
       }
       cout<<a;
        return a;
       }  
      
};
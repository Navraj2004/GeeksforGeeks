class Solution {
    public:
  
      vector<int> bracketNumbers(string str) {
          // Your code goes here
          
          stack<int>check;
          vector<int>ans;
          int count=0;
          for(int i=0; i<str.size(); i++)
          {
              if(str[i]=='(')
              {
                  count++;
                  check.push(count);
                  ans.push_back(count);
              }
              
              else{
                  
                   if(str[i]==')')
                   {
                       ans.push_back(check.top());
                       check.pop();
                   }
                  
              }
              
              
              
              
          }
          
          return ans;
          
          
          
      }
  };
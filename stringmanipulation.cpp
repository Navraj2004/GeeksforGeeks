class Solution {
    public:
      int removeConsecutiveSame(vector<string>& arr) {
          // Your code goes here
          
          
          stack<string>st;
          
          for(int i=0; i<arr.size(); i++)
          {
              if(st.empty())
              {
                  st.push(arr[i]);
              }
              
              else if(arr[i]==st.top())
              {
                  st.pop();
              }
              
              else
              {
                  st.push(arr[i]);
              }
              
              
              
          }
          
          return st.size();
          
      }
  };
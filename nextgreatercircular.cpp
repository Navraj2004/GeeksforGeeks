
class Solution {
    public:
      vector<int> nextLargerElement(vector<int> &arr) {
          // code here
          int n=arr.size();
          vector<int>ans(arr.size(), -1);
          stack<int>st;
          for(int i=0; i<2*n; i++)
          {
              int index=i%n;
              while(!st.empty() && arr[index]>arr[st.top()])
              {
                        
                      ans[st.top()] = arr[index];
                  
                  st.pop();
                  
              }
              
              
         
              st.push(index);
        
              
              
              
          }
          
          return ans;
          
          
      }
  };
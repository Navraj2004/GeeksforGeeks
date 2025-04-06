//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n)
{
    stack<int>st;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            st.push(arr[i]);
        }
        
        else
        {
          st.push(min(arr[i], st.top()));
        }
        
       
    }
     return st;
   // your code here
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    // your code here
    
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

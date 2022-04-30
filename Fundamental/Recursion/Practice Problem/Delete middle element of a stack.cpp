#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void midDelete(stack<int>&s,int i, int size){
        if(i==size) return;
        int x = s.top();
        s.pop();
        midDelete(s,i+1,size);
        if(i==size/2) return;
        s.push(x);
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int size)
    {
        // code here..
         midDelete(s,0,size);
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
// } Driver Code Ends

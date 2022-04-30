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
// } Driver Code Ends

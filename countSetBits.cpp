// Solve on gfg

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{
public:
    int setBits(int N)
    {
        int sum = 0;
        while(N > 0){
            if(N%2 == 1){
                sum++ ;
            }
            N /= 2;
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends

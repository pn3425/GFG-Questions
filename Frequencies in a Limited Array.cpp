//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> hash(n+1,0); //Creating an array of size n+1 initialized to 0
        
        for(int i=0;i<arr.size();i++)
        {
            hash[arr[i]]+=1;
        }
        
        vector<int> res;
        for(int i=1;i<=n;i++) //Writing this to exclude the count of 0, since indexing is from 1
        {
            res.push_back(hash[i]);
        }
        return res;
    }
};



//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.frequencyCount(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no duplicates are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends

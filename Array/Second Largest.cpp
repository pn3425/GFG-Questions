// Striver 
class Solution {
  public:
  
    int largest(vector<int> &arr)  
    {
        int max = arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    int getSecondLargest(vector<int> &arr) {
        // code here
        int secondLargest = -1;
        int largestN = largest(arr);
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>secondLargest && arr[i]!=largestN)
            {
                secondLargest = arr[i];
            }
        }
        return secondLargest;
    
    }
};


/* My Solution 

class Solution {
  public:

    int largest(vector<int> &arr) {
        int max = arr[0];
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }

    int getSecondLargest(vector<int> &arr) {
        if (arr.size() < 2) return -1;

        int largestN = largest(arr);

        // Make a copy of arr so we don't modify the original vector
        vector<int> filteredArr = arr;

        // Remove all instances of the largest element
        filteredArr.erase(remove(filteredArr.begin(), filteredArr.end(), largestN), filteredArr.end());

        if (filteredArr.empty()) return -1;

        int SecondLargest = largest(filteredArr);
        return SecondLargest;
    }
};*/

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        
         int temp[1000000];
 //Approach 1 
    //      for(int i=0;i<n;i++)
    //      {
    //          temp[i]=arr1[i];
    //         //  temp[i+n]=arr2[i];
    //      }
    //      int s=0;
    //      for(int j=n;j<n+m;j++)
    //      {
    //         temp[j]=arr2[s];
    //         s++;
    //      }
    //     sort(temp,temp+n+m);
    //     return temp[k-1];  
    // }
    
 //Approach 2 
    int i=0,j=0,d=0;
    while(i<n)
    {
        temp[d]=arr1[i];
        i++;
        d++;
    }
    while(j<m && d<m+n)
    {
        temp[d]=arr2[j];
        j++;
        d++;
    }
    sort(temp,temp+n+m);
    return temp[k-1];
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];

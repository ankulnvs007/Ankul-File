//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    void swapNums(vector<int>&nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    map<int, int> mp;
	    for(int i=0; i<nums.size(); i++) {
	        mp[nums[i]] = i;
	    }
	    int i=0, count = 0;
	    for(auto it : mp) {
	        if(nums[i]!=it.first) {
	            mp[nums[i]] = it.second;
	            swapNums(nums, i, it.second);
	            count++;
	        }
	        i++;
	    }
	    return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends

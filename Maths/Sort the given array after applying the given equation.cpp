// Time Comeplexity - O(n)
// Space Comeplexity - O(n)

class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        
        int n = arr.size();
        
        vector<int> result;
        
        for(int i=0;i<n;i++) {
            
            long long quad = (A * (arr[i] * arr[i])) + (B * arr[i]) + C;
            
            result.push_back(quad);
        }
        
        sort(begin(result), end(result));
        
        return result;
    }
};

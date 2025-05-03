// Time Complexity - O(n + m)
// Space Complexity - O(n)

class Solution {
  public:
    
    bool isSubset(vector<int> &a, vector<int> &b) {
        
        unordered_map<int, int> mp;
        
        for(int num : a) {
            mp[num]++;
        }
        
        for(int num : b) {
            if(mp[num] == 0) {
                return false;
            }
            mp[num]--;
        }
        
        return true;
    }
};

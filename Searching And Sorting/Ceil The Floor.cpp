
class Solution {
  public:
    
    int lower(vector<int> &arr, int x) {
        
        int start = 0, end = arr.size() - 1, mid;
        int ans = -1;
        
        while(start <= end) {
            mid = start + (end - start) / 2;
            
            if(arr[mid] > x) {
                end = mid - 1;
            }
            else {
                ans = arr[mid];
                start = mid + 1;
            }
        }
        
        return ans;
    }
    
    
    int upper(vector<int> &arr, int x) {
        
        int start = 0, end = arr.size() - 1, mid;
        int ans = -1;
        
        while(start <= end) {
            mid = start + (end - start) / 2;
            
            if(arr[mid] < x) {
                start = mid + 1;
            }
            else {
                ans = arr[mid];
                end = mid - 1;
            }
        }
        
        return ans;
    }
    
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        
        sort(arr.begin(), arr.end());
        
        return {lower(arr,x), upper(arr,x)};
    }
};

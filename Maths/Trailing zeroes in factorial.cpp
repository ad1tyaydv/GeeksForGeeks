// Apporach - 1 (Time Limit exceded)

class Solution {
  public:
    int trailingZeroes(int n) {
        
        long long fact = 1;
        
        for(int i=1;i<=n;i++) {
            fact *= i;
        }
        
        int count = 0;
        while(fact > 0) {
            int rem = fact % 10;
            if(rem == 0) {
                count++;
                fact /= 10;
            }
            else {
                break;
            }
        }
        
        return count;
    }
};

------------------------------------------------------------------------------------------------------------------------

// Approach - 2 (Optiaml)

class Solution {
  public:
    int trailingZeroes(int n) {
        
        int count = 0;
        while(n >= 5) {
            n /= 5;
            count += n;
        }
        
        return count;
    }
};

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int finalXor = 0;
        // XOR of all integers in the array.
        for (int n : nums) {
            finalXor = finalXor ^ n;
        }
        
        int count = 0;
        // Keep iterating until both k and finalXor becomes zero.
        while (k || finalXor) {
            // k % 2 returns the rightmost bit in k,
            // finalXor % 2 returns the rightmost bit in finalXor.
            // Increment counter, if the bits don't match.
            if ((k % 2) != (finalXor % 2)) {
                count++;
            }
            k /= 2;
            finalXor /= 2;
        }
        
        return count;
    }
};
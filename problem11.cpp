// Find missing number in an array

int missingNumber(vector<int> &a, int N)
{
    int n = N - 1;
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

// Understable Version of Missing Number Problem

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = ans ^ i;
        }

        for (int i = 0; i < n; i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
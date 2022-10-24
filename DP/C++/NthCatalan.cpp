
class Solution
{
public:
    // QUESTION:::Function to find the nth catalan number.

    cpp_int findCatalan(int n)
    {
        vector<cpp_int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = 0;
            for (int j = 0; j < i; j++)
            {
                dp[i] += dp[j] * dp[i - j - 1];
            }
        }

        return dp[n];

        // IF I/P IS 8 WE GET 1430
        //  IF I/P IS 6 WE GET 132
        //  Catalan numbers can be used to find the number of possibilities of various combinations.
    }
};
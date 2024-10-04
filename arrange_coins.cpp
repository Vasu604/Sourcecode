// Arrange Coins Problem :- Leetcode 441
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0, right = n;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long coinsUsed = mid * (mid + 1) / 2;
            
            if (coinsUsed == n) {
                return mid; // Exact match
            } else if (coinsUsed < n) {
                left = mid + 1; // We can potentially use more coins
            } else {
                right = mid - 1; // We need fewer coins
            }
        }
        return right; // The largest full row count that can be completed
    }
};
int main()
{
  int n = 5;
  Solution sol;
  int result = sol.arrangeCoins(n);
  cout<<result;
  return 0;
}

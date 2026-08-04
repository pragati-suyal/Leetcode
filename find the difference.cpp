class Solution()
public:
  char findtheDifference(string s, string t) {
    char ans = 0;

    for (char c : s)
     ans ^= c;

     for (char c : t)
     ans ^= c;

     return ans;
  }
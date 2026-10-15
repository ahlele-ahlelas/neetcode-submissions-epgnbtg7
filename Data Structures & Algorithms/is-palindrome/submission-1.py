class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1 = str()
        for ch in s:
            if ch.isalnum():
                s1+=ch.lower()
            else:
                continue
        s2 = "".join(reversed(s1))
        return s1==s2
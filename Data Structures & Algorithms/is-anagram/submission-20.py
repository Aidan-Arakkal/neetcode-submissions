class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # hash1 hash2 check length
        if(len(s) != len(t)):
            return False
        hash1 ={}
        hash2 = {}
        for i in range(len(s)):
            hash1[s[i]] = hash1.get(s[i],0) +1
            hash2[t[i]] = hash2.get(t[i],0)+1
        if hash1 == hash2:
            return True
        return False
                
        
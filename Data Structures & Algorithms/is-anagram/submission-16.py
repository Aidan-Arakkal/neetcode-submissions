class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        one = {}
        two = {}
        if len(s) != len(t):
            return False
        for i in s:
            if i in one:
                one[i]+=1
            else:
                one[i]=0
        for j in t:
            if j in two:
                two[j]+=1
            else:
                two[j] =0
        
        if one == two:
            return True

        return False

            
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        # so we need a list of hash maps
        # we go through each string in the List and compute hash map
        # check if hash map matches any of prervious hash map
        # if so we add to list of lists
        # so we neeed [{:[]}] 
        dalist = {}
        for i in strs:
            dictionairy = {}
            for j in i:
                dictionairy[j] = dictionairy.get(j,0) + 1
            dicti = tuple(sorted(dictionairy.items()))
            if dalist.get(dicti) != None:
                dalist[dicti].append(i)
            else:
                dalist[dicti] = [i]
        output = []
        for l in dalist:
            output.append(dalist[l])
        return output

            

            


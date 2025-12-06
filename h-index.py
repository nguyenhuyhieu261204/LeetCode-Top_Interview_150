class Solution(object):
    def hIndex(self, citations):
        """
        :type citations: List[int]
        :rtype: int
        """
        citations.sort()
        length = len(citations)
        for i in range(length):
            h = length - i
            if citations[i] >= h:
                return h
        
        return 0



class Solution(object):
    def hIndex(self, citations):
        """
        :type citations: List[int]
        :rtype: int
        """
        freq = {}
        for num in citations:
            freq[num] = freq.get(num, 0) + 1

        prev_sum = 0
        for h in range(max(citations), -1, -1):
            prev_sum += freq.get(h, 0)
            if prev_sum >= h:
                return h
        
        return 0
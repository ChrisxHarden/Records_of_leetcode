class Solution:
    def shipWithinDays(self, weights: List[int], D: int) -> int:
        left=max(weights)
        right=sum(weights)
        while left<right :
            need=1
            cur=0
            mid=(left+right)//2
            for weight in weights:
                if cur+weight>mid:
                    cur=0
                    need=need+1

                cur+=weight

            if need>D :
                left=mid+1
            else:
                right=mid
        return left                
        

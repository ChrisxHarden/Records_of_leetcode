class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
     int left=*max_element(weights.begin(),weights.end()),right=accumulate(weights.begin(),weights.end(),0);
     //定义二分查找的左右边界
     while(left<right)
     {
        int mid=(left+right)/2;
        int cur=0;//当前天运载量
        int need=1;//需要运送天数
         for(int load :weights)
         {
             if(cur+load>mid)
             {
                 need++;
                 cur=0;

             }
            cur+=load;//如果当前装载量大于标的值,则视为在新的一天进行装载,清空存货,天数+1;若未大于则进行实际装载
         
        }
        if(need>D){left=mid+1;}
         else{right=mid;}


    }
    return left;
    }
};

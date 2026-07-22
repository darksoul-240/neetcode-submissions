class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            unordered_set<int>s;
            if(nums.empty()){
                return 0;
            }
            for(int i:nums){
                s.insert(i);
            }
            int size=0;
            for(int i:s){
                int cnt=1;
                if(s.find(i-1)==s.end()){
                    while(s.find(i+1)!=s.end()){
                        i++;
                        cnt++;
                    }
                if(cnt>size){
                    size=cnt;
                }
                }
            }
            return size;
            
    }
};

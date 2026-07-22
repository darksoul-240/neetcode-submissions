class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
            set<int>s;
            if(nums.size()==0){
                return 0;
            }
            for(int i:nums){
                s.insert(i);
            }
            int num;
            int size=0;
            for(int i:s){
                int cnt=0;
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
            return size+1;
            
    }
};

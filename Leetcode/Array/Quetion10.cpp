// Single Number
        int singleNumber(vector<int>& nums) {
            int ans=0;
            int n=nums.size()-1;
            for(int value:nums){
                ans=ans^value;
            }
            return ans;
            
        }
        int main(){
            vector<int> nums={4,1,2,1,2};
            cout<<singleNumber(nums)<<endl;
        }
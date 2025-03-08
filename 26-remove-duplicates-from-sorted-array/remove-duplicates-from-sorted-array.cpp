class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 0;
        for (int j = 1; j<nums.size(); j++){
            if (nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
        
    }
    int main(){
        vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
        int k = removeDuplicates(nums);
        cout<<"Output: "<<k<<",nums = [";

        for (int i= 0; i<k; i++){
            cout<<nums[i]<<(i<k-1 ? ", " : "");
        }
        cout<<", _]\n";
        return 0;
    }
};
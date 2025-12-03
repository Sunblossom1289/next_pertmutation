class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        int idx1=-1, idx2=-1;

        if(n==1)return;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        if(idx1==-1){
            //mtlb nhi mila toh bas simply reverse krdena h hme thats it nothing else according to the demand of the question
            reverse(nums.begin(),nums.end());
            return;
            //ye return add krna padega ye bhul jrhi thi mai bar 2 isiliye error arha tha

        }

        //abi phirse travserse krenge right to left aur store krenge agr idx2 ko agr koi mila jo idx1 sebadh ho
        for(int i =n-1;i>=0;i--){
            if(nums[i] > nums[idx1]){
                idx2=i;
                break;
            }
            }
        //step 3 is to swap them that is idx1 and idx 2
        swap(nums[idx1],nums[idx2]);
        //baki k part ko sort krna h asc order me bhi swap krne k baad okay toh bas ham reverse krdenge simply tahtss it
        reverse(nums.begin() + idx1 +1 , nums.end());
    }
};

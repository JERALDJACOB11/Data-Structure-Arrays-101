class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int count=0;
        int[] new_arr = new int[nums.length];
        for(int i=0; i<nums.length; i++){
            if(nums[i]%2==0){
                new_arr[count] = nums[i];
                count++;
            }
        }
        for(int i=0; i<nums.length; i++){
            if(nums[i]%2==1){
                new_arr[count] = nums[i];
                count++;
            }
        }
        return new_arr;
        
    }
}

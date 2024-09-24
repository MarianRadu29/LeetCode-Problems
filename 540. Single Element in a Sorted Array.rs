impl Solution {
    pub fn single_non_duplicate(nums: Vec<i32>) -> i32 {
        let mut i = 0usize;
        let mut value = 0i32;
        while i<nums.len()
        {
            if i==nums.len()-1
            {
                value = nums[i];
                break;
            }
            if nums[i]!=nums[i+1]
            {
                value = nums[i];
                break;
            }
            i+=2;
        }
        value
    }
}
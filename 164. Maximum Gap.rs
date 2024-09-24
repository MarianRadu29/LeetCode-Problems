impl Solution {
    pub fn maximum_gap(nums: Vec<i32>) -> i32 {
        let mut maxx = 0i32;
        let n = nums.len();
        let mut nums = nums;
        nums.sort();
        for i in 0..n-1
        {
            
            if maxx<nums[i+1]-nums[i]
                {
                    maxx = nums[i+1]-nums[i];
                }
            
        }

        maxx
    }
}
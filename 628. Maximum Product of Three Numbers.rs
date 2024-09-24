impl Solution {
    pub fn maximum_product(nums: Vec<i32>) -> i32 {
        let mut nums = nums;
        nums.sort_unstable();
        let l = nums.len();
        std::cmp::max(nums[l-1]*nums[l-2]*nums[l-3], nums[0]*nums[1]*nums[l-1])
    }
}
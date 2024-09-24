impl Solution {
    pub fn build_array(nums: Vec<i32>) -> Vec<i32> {
        let mut result:Vec<i32> = Vec::new();
        let n = nums.len();
        for i in 0..n{
            result.push(nums[nums[i] as usize]);
        }
        result
    }
}
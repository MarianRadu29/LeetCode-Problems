impl Solution {
    pub fn decompress_rl_elist(nums: Vec<i32>) -> Vec<i32> {
        let n = nums.len();
        let mut result:Vec<i32> = Vec::new();
        let mut i = 0usize;
        while i<n
        {
            let number = nums[i+1];
            let f = nums[i];
            for _ in 0..f
            {
                result.push(number);
            }
            i+=2;
        }
        result
    }
}
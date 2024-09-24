impl Solution {
    pub fn sum_of_squares(nums: Vec<i32>) -> i32 {
        let n = nums.len() as i32;
        let mut result = 0i32;
        for i in 0..n
        {
             if n%(i+1)==0
            {
                result+= nums[i as usize] * nums[i as usize];
            }
        }

        result
    }
}
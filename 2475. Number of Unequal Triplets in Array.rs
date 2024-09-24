impl Solution {
    pub fn unequal_triplets(nums: Vec<i32>) -> i32 {
        let mut result = 0i32;
        let n = nums.len();
        for i in 0..n-2
        {
            for j in i+1..n-1
            {
                for k in j+1..n
                {
                    if nums[j]!=nums[i] && nums[i]!=nums[k] && nums[j]!=nums[k]
                    {
                        result+=1;
                    }
                }
            }
        }

        result
    }
}
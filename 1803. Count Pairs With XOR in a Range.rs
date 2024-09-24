impl Solution {
    pub fn count_pairs(nums: Vec<i32>, low: i32, high: i32) -> i32 {
        let mut count = 0i32;
        let n = nums.len();
        for i in 0..n-1
        {
            for j in i+1..n
            {
                let number = nums[i] ^ nums[j];
                if number>=low && number<=high
                {
                    count+=1;
                }
            }
        }
        count
    }
}
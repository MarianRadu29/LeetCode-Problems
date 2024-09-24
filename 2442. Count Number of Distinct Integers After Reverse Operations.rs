impl Solution {
    pub fn count_distinct_integers(nums: Vec<i32>) -> i32 {
        fn revnum(mut n: i32) -> i32
        {
            let mut rev : i32 = 0;
            while n > 0
            {
                rev *= 10;
                rev += (n%10);
                n   /= 10;
            }
            rev
        }
        let n = nums.len();
        let mut nums = nums;
        for i in 0..n
        {
            nums.push(revnum(nums[i]));
        }
        nums.sort();
        nums.dedup();//sterge elementele cu pozitii adiacente ce sunt egale
        nums.len() as _
    }
}
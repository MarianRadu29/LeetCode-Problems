impl Solution {
    pub fn maximum_prime_difference(nums: Vec<i32>) -> i32 {
        fn is_prime(num:i32) ->bool
        {   
            if num==1{
                return false;
            }
            let mut d = 2;
            let mut sw = true;
            while d*d<=num && sw==true
            {
                if num%d==0
                {
                    sw = false;
                }
                d+=1;
            }
            sw
        }
        let left = nums.iter().position(|&x| is_prime(x)).unwrap();
        let right = nums.iter().rposition(|&x| is_prime(x)).unwrap();
        (right - left) as _
    }
}
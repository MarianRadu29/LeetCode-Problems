impl Solution 
{
    pub fn sum_of_number_and_reverse(num: i32) -> bool 
    {
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
        
        (num/2..=num).any(|n| n + revnum(n) == num)
    }
}
impl Solution {
    pub fn average_value(nums: Vec<i32>) -> i32 {
        let mut count = 0i32;
        let mut suma = 0i32;
        for i in nums
        {
            if i%6==0
            {
                suma+=i;
                count+=1;
            }
        }
        if count>0{
            return suma/count;
        }
        return 0;
    }
}
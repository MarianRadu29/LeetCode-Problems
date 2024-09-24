impl Solution {
    pub fn count_complete_day_pairs(hours: Vec<i32>) -> i32 {
        let mut result = 0i32;
        let n = hours.len();

        for i in 0..n-1{
            for j in i+1..n
            {
                if (hours[i]+hours[j])%24==0
                {
                    result+=1;
                }
            }
        }

        result
    }
}
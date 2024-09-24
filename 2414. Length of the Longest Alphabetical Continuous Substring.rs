impl Solution {
    pub fn longest_continuous_substring(s: String) -> i32 {

            let mut max = 1i32;
            let v = s.chars().collect::<Vec<char>>();
            let mut current = 1i32;
            let n = s.len();
            for i in 0..n-1{
                if v[i] as u8 + 1 == v[i+1] as u8
                {   
                    current+=1;
                    max = max.max(current);
                    
                }
                else{
                    current = 1;
                }
            }

            max
        }
}
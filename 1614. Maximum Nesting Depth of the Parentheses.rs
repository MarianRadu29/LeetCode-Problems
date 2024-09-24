impl Solution {
    pub fn max_depth(s: String) -> i32 {
        let mut count = 0;
        let mut result= 0;
        for c in s.chars()
        {
            if c == '('
            {
               count+=1;
            }
            else {
                if c==')'
                {
                    count-=1;
                }
            }
            result = result.max(count);
        }

        result

    }
}
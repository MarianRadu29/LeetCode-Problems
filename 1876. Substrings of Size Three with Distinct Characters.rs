impl Solution {
    pub fn count_good_substrings(s: String) -> i32 {
            if s.len()<3
            {
                return 0;
            }
            let mut s = s;
            let n = s.len();
            let mut nr = 0i32;
            for i in 0..n-2
            {
                let ss:Vec<char> = s[i..=i + 2].chars().collect();
                if ss[0]!=ss[1] && ss[1]!=ss[2] && ss[0]!=ss[2]
                {
                    nr += 1;
                }
            }
        nr

    }
}
impl Solution {
    pub fn beautiful_indices(s: String, a: String, b: String, k: i32) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![];
        let a_pos = Self::get_pos(&s, &a);
        let b_pos = Self::get_pos(&s, &b);
        let mut i = 0;
        let mut j = 0;
        let m = a_pos.len();
        let n = b_pos.len();
        while i < m {
            while j < n && b_pos[j] < a_pos[i] {
                j += 1;
            }
            if j < n && b_pos[j] - a_pos[i] <= k as usize {
                ans.push(a_pos[i] as i32);
            } else if j > 0 && a_pos[i] - b_pos[(j - 1) as usize] <= k as usize {
                ans.push(a_pos[i] as i32);
            }
            i += 1;
        }
        ans
    }

    fn get_pos(s: &str, t: &str) -> Vec<usize>//vector de pozitii in care apare t in s 
    {
        let mut ans = vec![];
        let (n, m) = (s.len(), t.len());
        if n >= m {
            let lps = Self::get_lps(&t);
            let mut j = 0;
            for i in 0..n {
                while j > 0 && s.as_bytes()[i] != t.as_bytes()[j] {
                    j = lps[j - 1];
                }
                if s.as_bytes()[i] == t.as_bytes()[j] {
                    j += 1;
                }
                if j == m {
                    ans.push(i - m + 1);
                    j = lps[j - 1];
                }
            }
        }
        ans
    }

    fn get_lps(s: &str) -> Vec<usize>//vector de prefixe si/sau sufixe 
    {
        let n = s.len();
        let mut lps = vec![0; n];
        let mut j = 0;
        for i in 1..n {
            while j > 0 && s.as_bytes()[i] != s.as_bytes()[j] {
                j = lps[j - 1];
            }
            if s.as_bytes()[i] == s.as_bytes()[j] {
                j = lps[j] + 1;
            }
            lps[i] = j;
        }
        lps
    }
}
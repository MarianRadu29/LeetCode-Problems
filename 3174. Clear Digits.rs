impl Solution {
    pub fn clear_digits(s: String) -> String {
        let mut v:Vec<char> = s.chars().collect();
        let mut n = v.len();
        let mut i=0usize;
        'lloop:loop{
            if i==n
            {
                break 'lloop;
            }
            if v[i]>='0' && v[i]<='9'
            {
                let mut j = i-1;
                if j>=0
                {
                    v.remove(j);
                    n-=1;
                    i-=1;
                }
                v.remove(i);
                i-=1;
                n-=1;
            }
            i+=1;
        }
        v.iter().collect()
    }
}
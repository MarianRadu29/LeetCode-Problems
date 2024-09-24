impl Solution {
    pub fn has_alternating_bits(n: i32) -> bool {
       let mut p = 0i32;
       while p<n.ilog2() as i32
        {
            if (n>>p)%2 == (n>>(p+1))%2
            {
                return false;
            }
            p+=1;
        }

        true
    }
}
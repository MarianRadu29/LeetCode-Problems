impl Solution {
    pub fn count_triples(n: i32) -> i32 {
        let mut count = 0i32;

        for a in 1..=n
        {
            for b in 1..=n
            {
                let c = a.pow(2) + b.pow(2);
                if (c as f64).sqrt() as i32<=n && ((c as f64).sqrt() as i32 * (c as f64).sqrt() as i32 == c) 
                {
                    count+=1;
                }
            }
        }
        count

    }
}
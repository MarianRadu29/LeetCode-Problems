

impl Solution {
    fn gcd(a: i32, b: i32) -> i32
    {
        if a < b {
            let (a, b) = (b, a);
        }
        match b {
            0 => a,
            _ => gcd(b, a % b),
        }
    }

    fn lcm(a: i32, b: i32, d: i32) -> i32 {
        let (a,b,d) = (a as i64,b as i64,d as i64);
        let ans = (a * b) / d;
        ans as i32
    }

    pub fn replace_non_coprimes(nums: Vec<i32>) -> Vec<i32> {
        let mut res = vec![];
        for v in nums.iter() {
            let n = res.len();
            if n == 0 {
                res.push(*v);
                continue;
            }
            let mut m = *v;
            loop {
                let n = res.len();
                if n <= 0 { break }
                
                let tail = res.pop().unwrap();
                let d = gcd(m, tail);
                if d == 1 {
                    res.push(tail);
                    break;
                }
                m = lcm(m, tail, d);
                // println!("v {} tail {}, gcd {}, lcm {}", v, tail, d, m);
            }
            res.push(m);
            // println!("res {:?}", res);
        }
        res
    }
}
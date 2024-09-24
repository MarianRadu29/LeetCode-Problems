impl Solution {
    pub fn simplified_fractions(n: i32) -> Vec<String> {
        use std::collections::BTreeSet;
        let mut result = Vec::new();
        fn gcd(mut i:i32,mut j:i32) -> i32
        {
            while i!=j
            {
                if i>j{
                    i-=j;
                }
                else{
                    j-=i;
                }
            }
            i
        }
        for i in 2..=n {
            for j in 1..i
            {
                let x = gcd(i,j);
                let (mut ii,mut jj) = (i,j);
                ii/=x;
                jj/=x;
                let aux = jj.to_string() + "/" + ii.to_string().as_str();
                if result.contains(&aux)==false{
                    result.push(aux);
                }
            }
        }

        result
    }
}
impl Solution {
    pub fn min_partitions(n: String) -> i32 {
        let mut maxx = 0i32;
        for i in n.chars()
        {
            let aux = i as i32 -'0' as i32;
            if aux>maxx
            {
                maxx = aux;
            }
        }
        maxx
    }
}
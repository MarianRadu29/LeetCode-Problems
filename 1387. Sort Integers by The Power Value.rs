impl Solution {
    pub fn get_kth(lo: i32, hi: i32, k: i32) -> i32 {
        use std::collections::BinaryHeap;
        use std::cmp::Reverse;

        let mut pq = BinaryHeap::new();
        for i in lo..=hi
        {
            let mut count = 0;
            let mut x = i;
            while x>1
            {
                if x%2==1
                {
                    x = x*3+1;
                }
                else {
                    x/=2;
                }
                count+=1;
            }
            pq.push(Reverse((count,i)));
        }
        for i in 0..k-1
        {   
            pq.pop();
        }
        let result = pq.pop().unwrap().0.1;
        result
    }
}
impl Solution {
    pub fn replace_elements(arr: Vec<i32>) -> Vec<i32> {
        fn maxi(v: &[i32]) ->i32
        {   let mut maxx = i32::MIN;
            for i in v
            {
                if maxx<*i
                {
                    maxx = *i;
                }
            }
            maxx
        }
        let mut arr = arr;
        let n = arr.len();
        for i in 0..n-1
        {
            arr[i] = maxi(&arr[i+1..n])
        }
        arr[n-1] = -1;
        arr
    }
}
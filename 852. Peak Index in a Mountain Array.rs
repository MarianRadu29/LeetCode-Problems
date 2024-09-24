impl Solution {
    pub fn peak_index_in_mountain_array(arr: Vec<i32>) -> i32 {
        let mut low = 0;
        let mut high = arr.len() as i32 - 1;
        
        while low < high {
            let mid = low + (high - low) / 2;
            if arr[(mid + 1) as usize] > arr[mid as usize] {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        low
    }
}
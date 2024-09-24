struct KthLargest {
    k:i32,
    nums:Vec<i32>
}

impl KthLargest {

    fn new(k: i32, nums: Vec<i32>) -> Self {
        Self
        {
            k,
            nums
        }
    }

    fn add(&mut self, val: i32) -> i32 {
        self.nums.push(val);
        self.nums.sort();
        let n = self.nums.len();
        self.nums[n-self.k as usize]
    }
}

/**
* Your KthLargest object will be instantiated and called as such:
* let obj = KthLargest::new(k, nums);
* let ret_1: i32 = obj.add(val);
*/
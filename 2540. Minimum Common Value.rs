impl Solution {
    pub fn get_common(nums1: Vec<i32>, nums2: Vec<i32>) -> i32 {
        let mut result = -1;
        if nums1[nums1.len()-1]<nums2[0]
        {
            return result;
        }
        'forr: for i in nums1{
            if nums2.contains(&i)==true
            {
                result = i;
                break 'forr;
            }
        }

        result
    }
}
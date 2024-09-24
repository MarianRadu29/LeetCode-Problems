impl Solution {
    pub fn to_hex(num: i32) -> String {
        let mut result = format!("{:X}",num);
        result = result.to_ascii_lowercase();
        result
    }
}
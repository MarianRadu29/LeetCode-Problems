impl Solution {
    pub fn convert_to_base7(num: i32) -> String {
        if num==0
        {
            return "0".to_string();
        }
        let mut result:String = String::new();
        let ok = if num>=0{true} else {false};
        let mut n = num.abs();

        while n>0
        {
            result.insert(0,(('0' as u8) + ((n%7) as u8)) as char);
            n/=7;
        }
        if ok==true
        {
            return result;
        }
        result.insert(0,'-');
        result
    }
}
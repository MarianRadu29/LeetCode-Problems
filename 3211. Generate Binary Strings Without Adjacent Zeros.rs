impl Solution {
    pub fn valid_strings(n: i32) -> Vec<String> {
        if n == 1 { return vec!["0".to_string(),"1".to_string()] };
        
        let mut result:Vec<String> = vec![];
        for s in Solution::valid_strings(n-1) {
            result.push(s.clone()+"1");
            if s.chars().last().unwrap() != '0' {
                result.push(s+"0");
            }
        }
        result
    }
}
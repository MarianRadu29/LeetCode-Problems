impl Solution {
    pub fn make_good(s: String) -> String {
        let mut stack:Vec<char> = Vec::new();
        let mut result = String::new();
       for c in s.chars()
        {
            if stack.is_empty()==true
            {
                stack.push(c);
            }
            else {
                if stack[stack.len()-1] as u8 == c as u8 + 32 || stack[stack.len()-1] as u8 + 32 == c as u8
                {
                    stack.pop();
                }
                else {
                    stack.push(c);
                }
            }
        }
        result = stack.into_iter().collect();
        result
    }
}
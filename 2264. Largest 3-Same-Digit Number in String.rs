impl Solution {
    pub fn largest_good_integer(num: String) -> String {
        fn are_all_chars_the_same(s: &str) -> bool {
            if let Some(first_char) = s.chars().next() {
                s.chars().all(|c| c == first_char)
            } else {
                true
            }
        }
        fn string_to_int(s: &str) -> Option<i32> {
            let mut result = 0;
            for c in s.chars() {
                if let Some(digit) = c.to_digit(10) {
                    result = result * 10 + digit as i32;
                } else {
                    return None; 
                }
            }
            Some(result)
        }
        let mut result = "".to_string();
        let mut max = -1;
        let n = num.len();
        for i in 0..n-2
        {
            let x = &num[i..i+3];
            if are_all_chars_the_same(x)==true
            {
                let number = string_to_int(&(x.chars().next().unwrap().to_string())).unwrap();
                if number>max
                {
                    max = number;
                    result = x.to_string();
                }
            }
        }

        result

    }
}
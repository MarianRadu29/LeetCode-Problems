impl Solution {
    pub fn second_highest(s: String) -> i32 {
        let mut ar = [false; 10];

        s.as_bytes()
            .iter()
            .filter(|x| x.is_ascii_digit())
            .map(|x| x - b'0')
            .for_each(|x| ar[x as usize] = true);

        ar.iter()
            .enumerate()
            .filter_map(|(ind, val)| if *val { Some(ind as i32) } else { None })
            .rev()
            .nth(1)
            .unwrap_or(-1)
    }
}
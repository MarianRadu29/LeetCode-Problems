impl Solution {
    pub fn shortest_to_char(s: String, c: char) -> Vec<i32> {
       let positions: Vec<usize> = s.chars()
           .enumerate()
           .filter_map(|(i, ch)| if ch == c { Some(i) } else { None })
           .collect();
       let mut result:Vec<i32> = Vec::new();
       for (i,c) in s.char_indices()
       {
           let mut min_diff = i32::MAX;

           for &x in &positions {
               let diff = i.abs_diff(x);
               if diff < min_diff as usize {
                   min_diff = diff as i32;
               }
           }
           result.push(min_diff);
       }
       result
   }
}
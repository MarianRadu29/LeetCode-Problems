impl Solution {
    pub fn find_relative_ranks(score: Vec<i32>) -> Vec<String> {
       let mut score_clone = score.clone();
       score_clone.sort_by(|a, b| b.cmp(a));
       println!("{:?}",score_clone);
       let n = score.len();
       let mut result:Vec<String> = Vec::new();

       for i in 0..n
       {
           let x = score_clone.iter().position(|&x| x==score[i]).unwrap();
           println!("{:?}",x);
           match x
           {
               0 => result.push("Gold Medal".to_string()),
               1 => result.push("Silver Medal".to_string()),
               2 => result.push("Bronze Medal".to_string()),
               _ => result.push((x+1).to_string()),

           }

       }
       result
   }
}
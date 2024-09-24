impl Solution {
    pub fn rotate_string(s: String, goal: String) -> bool {
      let mut s = s;
      let n = s.len();
      for _ in 0..n
      {
          let c = s.clone().chars().into_iter().next().unwrap();//primul caracter din string;
          s.remove(0);
          s.push(c);
          if s==goal
          {
              return true;
          }
      }
      false
  }
}
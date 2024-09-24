impl Solution {
    pub fn area_of_max_diagonal(dimensions: Vec<Vec<i32>>) -> i32 {
      let (mut max_d, mut max_a) = (0, 0);
      for v in dimensions {
        let d = v[0] * v[0] + v[1] * v[1];
        if d > max_d {
          max_d = d;
          max_a = v[0] * v[1];
        } else if d == max_d && max_a < v[0] * v[1] {
          max_a = v[0] * v[1];
        }
      }
      return max_a;
    }
  }
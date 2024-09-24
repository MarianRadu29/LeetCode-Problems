impl Solution {
    pub fn transpose(matrix: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let n = matrix.len();
        let m = matrix[0].len();
        let mut result:Vec<Vec<i32>> = Vec::new();
        for j in 0..m
        {
            let mut v = Vec::new();
            for i in 0..n
            {
                v.push(matrix[i][j]);
            }
            result.push(v);
        }

        result
    }
}
impl Solution {
    pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
        let (m, n) = (matrix.len(), matrix[0].len());
        let (mut i, mut j) = (0, n-1);
        while i < m && j < n {
            if matrix[i][j] == target { return true; }
            else if matrix[i][j] < target { i += 1; }
            else if matrix[i][j] > target { j -= 1; }
        } false
    }
}
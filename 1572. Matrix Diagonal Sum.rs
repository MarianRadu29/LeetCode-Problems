impl Solution {
    pub fn diagonal_sum(mat: Vec<Vec<i32>>) -> i32 {
        let mut sum = 0i32;
        let n = mat.len();
        for i in 0..n
        {
            sum = sum+mat[i][i]+mat[i][n-i-1];
            if n%2==1 && i ==n/2
            {
                sum-=mat[i][i];
            }
        }
        sum
    }
}
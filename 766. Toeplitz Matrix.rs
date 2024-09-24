impl Solution {
    pub fn is_toeplitz_matrix(matrix: Vec<Vec<i32>>) -> bool {
         let (n, m) = (matrix.len(), matrix[0].len());
        // let (mut i, mut j) = (0, 0);
         for i in (0..n).rev()
         {
             let mut k = i;
             let mut j = 0usize;
             let number = matrix[k][j];
             while k<n && j<m
             {
                 if matrix[k][j]!=number
                 {
                     return false;
                 }
                 k+=1;
                 j+=1;
             }
         }
 
         for k in 1..m
         {
             let mut i = 0usize;
             let mut j = k;
             let number = matrix[i][j];
             while i<n && j<m
             {
                 if matrix[i][j]!=number
                 {
                     return false;
                 }
                 i+=1;
                 j+=1;
             }
 
         }
 
 
         true
     }
 }
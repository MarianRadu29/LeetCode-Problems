impl Solution {
    pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
       let mut current = -10e4 as i32;
       let mut index = 0usize;
       let n = matrix.len();
       let m = matrix[0].len();
       while index<n
       {
           if matrix[index][m-1]>=target && matrix[index][0]<=target
           {
               for i in 0..m
               {
                   if matrix[index][i]==target
                   {
                       return true;
                   }
               }
               return false;
           }
           if  index+1<n && matrix[index][m-1]>target && matrix[index+1][0]<target
           {
               return false;
           }
           index+=1;
       }
       false
   }
}
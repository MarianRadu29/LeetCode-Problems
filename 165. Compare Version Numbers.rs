impl Solution {
    pub fn compare_version(version1: String, version2: String) -> i32 {
         let mut split1: Vec<String> = version1.split('.').map(|s| s.to_string()).collect();
         let mut split2: Vec<String> = version2.split('.').map(|s| s.to_string()).collect();
         let n = split1.len();
         let m = split2.len();
         let (mut i,mut j) = (0,0);
         'whilee:while i<n || j<m
         {
             if i<n && j<m
             {
                 let n1:i32 = split1[i].parse().expect("NU s-a putut convertii");
                 let n2:i32 = split2[j].parse().expect("NU s-a putut convertii");
                 if n1>n2
                 {
                     return 1;
                 }
                 if n1<n2
                 {
                     return -1;
                 }
                 i+=1;
                 j+=1;
                 continue 'whilee;
             }
             
             while i<n
             {
                 let n1:i32 = split1[i].parse().expect("NU s-a putut convertii");
                 if n1>0
                 {
                     return 1;
                 }
                 i+=1;
             }
 
             while j<m
             {
                 let n2:i32 = split2[j].parse().expect("NU s-a putut convertii");
                 if n2>0
                 {
                     return -1;
                 }
                 j+=1;
             }
         }
         0
     }
 }
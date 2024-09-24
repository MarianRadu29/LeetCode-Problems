impl Solution {
    pub fn defang_i_paddr(address: String) -> String {
             let mut result = address;
             let result = result.replace(".", "[.]");
             result
     }
 }
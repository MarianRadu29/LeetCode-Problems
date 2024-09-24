impl Solution {
    pub fn final_value_after_operations(operations: Vec<String>) -> i32 {
        let mut result = 0i32;
        for s in operations.iter()
        {
            if let Some(x) = s.find("+")
            {
                result+=1;
            }
            
            if let Some(x) = s.find("-")
            {
                result-=1;
            }

        }
        result
    }
}
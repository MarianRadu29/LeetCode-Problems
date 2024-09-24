impl Solution {
    pub fn get_winner(arr: Vec<i32>, k: i32) -> i32 {
        if k> arr.len() as i32
        {
            return *arr.iter().max().unwrap();
        }
        let mut arr = arr;
        let mut i = 0usize;
        
        let mut count = 0i32;
         let mut value = arr[0].max(arr[1]);
        while count<k
        {
            if arr[0] > arr[1]
            {
                let aux  = arr[1];
                arr.remove(1);
                arr.push(aux);
                if arr[0]==value
                {
                    count+=1;
                }
                else {
                    count = 1;
                     value = arr[0];
                }
            }
            else {
                let aux  = arr[0];
                arr.remove(0);
                arr.push(aux);
                if arr[0]==value
                {
                    count+=1;
                }
                else {
                    count = 1;
                    value = arr[0];
                }
            }
        }
        value

    }
}
impl Solution {
    pub fn flip_and_invert_image(image: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
      let mut image = image;
      for v in image.iter_mut()
      {
          v.reverse();
          v.iter_mut().for_each(|x| if *x==1{ *x=0} else{*x=1});

      }
      
      image
  }
}
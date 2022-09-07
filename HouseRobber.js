/**
 * @param {number[]} nums
 * @return {number}
 */

 let helper=(arr)=>{
     
  let r1=0,r2=0;
  
  
  for(let i=0;i<arr.length;i++)
      {
         let temp=Math.max(r1+arr[i],r2);
         r1=r2;
          r2=temp;
      
      }
  return r2;
  
  
  
  
  
  
}






var rob = function(nums) {
  
  
  
 let m1=helper(nums.slice(1));
  let m2=helper(nums.slice(0,-1));
  
  let res=Math.max(helper(nums.slice(1)),helper(nums.slice(0,-1)))
  return Math.max(res,nums[0])
  
};
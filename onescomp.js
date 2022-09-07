function onesCompliment(num)
{
  
   let noOfBits=Math.floor(Math.log2(num)+1);
   return (1<<noOfBits)-1^num;
   
   
     
}







console.log(onesCompliment(45))













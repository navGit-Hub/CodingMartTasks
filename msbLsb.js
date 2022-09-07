
function setBitNumber(n)
    {
  
        // To find the position of the
        // most significant set bit
        let k = parseInt(Math.log(n) / Math.log(2), 10);
  
        // To return the value of the number
        // with set bit at k-th position
        return 1 << k;
    }
     
    let n = 273;
      console.log(setBitNumber(n));







 function LSB(num, K)
    {
        let x = (num & (1 << (K-1))) != 0;
        return (x);
    }
      
    let num = 10, K = 4;
            
    //Function call
    if(LSB(num, K)) 
      console.log("1") ;
  
    else
      console.log("0");
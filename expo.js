function powerOptimised(a, n)
{
   
    // Stores final answer
    let ans = 1;
   
    while (n > 0)
    {
        let last_bit = (n & 1);
        console.log(n,last_bit)
   
        // Check if current LSB
        // is set
        if (last_bit > 0)
        {
          console.log(ans,a)
            ans = ans * a;
        }
           
        a = a * a;
   
        // Right shift
        //console.log(n)
        n = n >> 1;
    }
    return ans;
} 
 
    // Driver Code
         
    let a = 2, n = 3;
   
    console.log(powerOptimised(a, n));
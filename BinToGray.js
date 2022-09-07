function greyConverter(n)
{
    return n ^ (n >> 1);
}
 

let n = 3;
console.log(greyConverter(n));
 
n = 9;
console.log(greyConverter(n));
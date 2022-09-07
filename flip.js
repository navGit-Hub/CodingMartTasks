function flip(arr)
{
  
  //return arr.map((elem)=>elem===0?1:0)
  
  
  for(let i=0;i<arr.length;i++)
  {
    if(arr[i]===1)
    arr[i]=0;
    else
    arr[i]=1;
  }
}
let bin=[];


let num=123;






while(num>0)
{
  bin.push(Math.floor(num%2));
  num=Math.floor(num/2);
}

let resArr=bin.reverse();
console.log("Number before flippine "+num,resArr.join(''))


flip(resArr);
let flipped=resArr.join('');



console.log("Number after flipping "+parseInt(flipped,2),flipped)


const permutator = (inputArr) => {
  let result = [];

  const permute = (arr, m = []) => {
    if (arr.length === 0) {
      result.push(m)
    } else {
      for (let i = 0; i < arr.length; i++) {
        let curr = arr.slice();
        let next = curr.splice(i, 1);
        permute(curr.slice(), m.concat(next))
     }
   }
 }

 permute(inputArr)

 return result;
}


let possible=permutator("123".split(""));
let input="213";
console.log(possible);

let flag=false;
for(let i=0;i<possible.length;i++)
{
  let res=possible[i].join('');
  //console.log(res,input)
  
  if(flag)
  {
     console.log(res);
     flag=false;
     break;
  }
  
  if(res===input)
       flag=true;
    
  

  
}
if(flag)
{
  console.log("No further combinations...")
}









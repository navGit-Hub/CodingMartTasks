import prompt from 'prompt-sync';



let string=prompt()("Enter the input string : ");
console.log(`"${string}"`)

function caps(string)
{
  let temp=string.split(" ");


 return temp.map(str=>{


if( str!=" " && str.length>1)
{
    let t=str[0];
    //console.log(t.toUpperCase()+str.slice(1))

return t.toUpperCase()+str.slice(1);

}

else if(str.length===1 && str!='.')
 return str.toUpperCase();

 return str;



 }).join(' ')

   

}
console.log(caps(string));


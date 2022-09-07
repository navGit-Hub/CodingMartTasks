
import prompt from 'prompt-sync';


let str=prompt()("Enter the input string : ");


function rotate()
{
  str=str.slice(-1)+str.slice(0,str.length-1);
     console.log(str);    
}




setInterval(rotate,1000)
import prompt from 'prompt-sync';


let date=prompt()("Enter a custom date(dd/mm/yy) : ");


let cd=date.split('/');
console.log(cd)


let today=new Date(cd[2],parseInt(cd[1])-1,cd[0]);

console.log(today);




let christmasYear=today.getFullYear();


if(today.getMonth()===11 && today.getDate()>25)
{
  christmasYear+=1;
}






let christmasDate=new Date(christmasYear,11,25);


let dayMilliseconds=1000*60*60*24;



let remainingDays=Math.ceil((christmasDate.getTime()-today.getTime())
/(dayMilliseconds))




if(today.getMonth()===11 && today.getDate()>25)
{
  console.log(`ooh no! you just missed the christmas, ${remainingDays} until next christmas!!`); 
}
else
  console.log(remainingDays,"days left for Christmas!!");
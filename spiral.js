//let ques=[[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14,15],[16,17,18,19,20],[21,22,23,24,25]];
let ques=[[1,2,3],[4,5,6]];

let [top,bot,left,right,ans]=[0,ques.length-1,0,ques[0].length-1,[]];

let temp=[];

while(top<=bot && left<=right)
{
      if(top>bot || left>right)
  break;
  
  for(let j=left;j<=right;j++)
  {
    ans.push(ques[top][j]);
  }
  top++;
  for(let i=top;i<=bot;i++)
  {
    ans.push(ques[i][right]);
  }
  right--;

  
  for(let j=right;left<=j;j--)
  {
    ans.push(ques[bot][j]);
  }
  bot--;
  for(let i=bot;top<=i;i--)
  {
    ans.push(ques[i][left]);
  }
  left++;
  
}
console.log(ans);







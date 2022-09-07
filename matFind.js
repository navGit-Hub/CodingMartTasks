
 

function checkWord(check, word, index, row, col)
{
     
    
    if (row < 0 || col < 0 ||
        row >= check.length ||
        col >= check[0].length)
        return false;
     

    if (check[row][col] !== word[index])
        return false;
         

    else if (index === word.length - 1)
     
        
        return true;
     
    let temp = check[row][col];
     
 
    check[row][col] = temp;

    if (checkWord(check, word,
                  index + 1, row + 1, col) ||
        checkWord(check, word,
                  index + 1, row - 1, col) ||
        checkWord(check, word,
                  index + 1, row, col + 1) ||
        checkWord(check, word,
                  index + 1, row, col - 1))
    {
        check[row][col] = "#";
        return true;
    }
     
    
    check[row][col] = temp;
    return false;
}
 

let check = [['c','o','d','f','s'],['m','l','i','k','q'],
['r','t','n','x','z'],['t','l','g','m','a'],['x','l','q','t','r'],];
let word = "codingmart";
let f = 0;
 
for(let i = 0; i < check.length; i++)
{
    for(let j = 0; j < check[0].length; j++)
    {
        if (check[i][j] === word[0] &&
            checkWord(check, word, 0, i, j))
        {
            console.log(true);
            f = 1;
        }
    }
    if (f === 1)
    {
        i = check.length + 1;
    }
}
if (f === 0)
{
    console.log(false);
}

let temp="";
for(let i = 0; i < check.length; i++)
{
    for(let j = 0; j < check[0].length; j++)
    {
     temp+=check[i][j];
    }
 
}
console.log(temp)
















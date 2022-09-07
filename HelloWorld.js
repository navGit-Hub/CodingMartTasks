var convert = function(s, numRows) {
    if(numRows === 1) return s;
    const arr = new Array(numRows).fill('').map(() => new Array(1).fill('')), length = s.length;
    let count = 0, isIncreasing = true;
    for(let i = 0; i < length; i++) {
        arr[count].push(s[i]);
        if(isIncreasing) {
            count++;
        }
        else {
            count--;
        }
        if(count == numRows-1 || count == 0) {
            isIncreasing = !isIncreasing;
        }
    }
    s = '';
    console.log(arr)
    arr.forEach(str => {
        s = s + str.join('');
    });
    return s;
};



console.log(convert("paypalishiring",4));
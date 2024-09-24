/**
 * @param {number} n
 * @return {number[]}
 */
var lexicalOrder = function(n) {
    const arr = [];
    for(let i=1;i<=n;i++){
        arr.push(i);
    }
    arr.sort();
    return arr;
};
// Last updated: 8/4/2026, 12:38:11 PM
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const newArr = [];
    for(let i = 0 ; i < arr.length ; i++){
        newArr[i] = fn(arr[i] , i);
    }

    return newArr;
};
// Last updated: 8/4/2026, 12:38:15 PM
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    filteredArr = [];
    for(let i = 0 ; i < arr.length ; i++){
        if(fn(arr[i] , i))
        filteredArr.push(arr[i]);
    }
    return filteredArr;
};
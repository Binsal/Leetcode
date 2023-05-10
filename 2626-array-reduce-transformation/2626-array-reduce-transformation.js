/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    var newArray=[];
    var sum=init;
    
    for(var i=0;i<nums.length;i++){
        // newArray.push(fn(init,nums[i]));
        sum=fn(sum,nums[i]);
    }
    
    return sum;
};
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimizeSum = function(nums) {
    nums.sort((a, b) => a - b);
    const l=nums.length;
   const res=[];
   let temp1,temp2;

   //case 1
   temp1=nums[0];
   temp2=nums[1];
   nums[0]=nums[2];
   nums[1]=nums[2];
   res.push((nums[l-1]-nums[0]));
   
   //case 2
   nums[0]=temp2;
   temp2=nums[l-1];
   nums[l-1]=nums[l-2];
   res.push((nums[l-1]-nums[0]));

   //case 3
   nums[0]=temp1;
   temp1=nums[l-2];
   nums[l-1]=nums[l-3];
   nums[l-2]=nums[l-3];
   res.push((nums[l-1]-nums[0]));

   res.sort((a, b) => a - b);
   return res[0];
};
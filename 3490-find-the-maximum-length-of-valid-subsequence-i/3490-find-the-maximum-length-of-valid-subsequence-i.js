/**
 * @param {number[]} nums
 * @return {number}
 */

 function fun(nums,temp_str){
    var county = 0;
        for(var i =0; i < nums.length ; i++)
        {
            if(temp_str == "even" && nums[i]%2 != 0)
            {
                county += 1;
                temp_str = "odd";
            }

            if(temp_str== 'odd' && nums[i]%2 == 0)
            {
                county += 1;
                temp_str = "even";
            }
        }
        return county;
 }
var maximumLength = function(nums) {
    var odd_count = 0;
    var even_count = 0;

    for(var i =0; i < nums.length ; i++)
    {
        if(nums[i]%2 == 0)
        {
            even_count += 1;
        }
        else if(nums[i]%2 != 0)
        {
            odd_count += 1;
        }
    }
        console.log(nums.length);
        console.log("even_count: %d\n odd_count: %d\n",even_count,odd_count);
        var even_odd_count = 0;
        var odd_even_count = 0;

        var temp_str;
        var flag = 0;

        if(nums[0]%2 != 0)
        {
           temp_str = "even";
           flag = 0;
           var even_odd_count = fun(nums,temp_str); 
        }
        else{
            temp_str = "odd";
            flag = 1;
            var odd_even_count = fun(nums,temp_str); 
        }

        var res = Math.max(even_count,odd_count,odd_even_count,even_odd_count);
        return res;
    };
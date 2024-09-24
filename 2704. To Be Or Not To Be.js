/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    function toBe(Val){
        if (val !== Val){
                throw new Error("Not Equal");
        }else{
                return true;
            }
        }
    function notToBe(Val)
    {
            if (val === Val){
                throw new Error("Equal");
            }
            else{
                return true;
            }
    }
    return {
        "toBe":toBe,
        "notToBe":notToBe
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
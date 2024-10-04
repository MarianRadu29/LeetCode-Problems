/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
var isMatch = function(s, p) {
    const regex = new RegExp(p);
    let newStr = s.replace(regex, "");
    //console.log(`"${newStr}"`)
    return newStr==="";
};
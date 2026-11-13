/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const anagrams = new Map();

    for (let i = 0; i < strs.length; i++){
        const key = strs[i].split('').sort().join('');

        if (anagrams.has(key))
        {
            anagrams.get(key).push(strs[i]);
        } else {
            anagrams.set(key, [strs[i]]);
        }
    }

    return Array.from(anagrams.values())
};
// for (var of container) iterable container like array string
// for (var in object ) for not iterable container

function maxCharfunc(str) {
  let max = 0;
  let maxChar = "";
  charMap = {};

  for (char of str) {
    if (!charMap[char]) {
      charMap[char] = 1;
    } else {
      charMap[char] += 1;
    }

    for (chars in charMap) {
      if (charMap[chars] > max) {
        max = charMap[chars];
        maxChar = chars;
      }
    }
  }
  return maxChar;
}

console.log(maxCharfunc("saurabh"));

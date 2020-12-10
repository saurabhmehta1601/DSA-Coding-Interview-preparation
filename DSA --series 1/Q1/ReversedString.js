// Method 1
function reverse1(str) {
  arr = str.split("");
  arr.reverse();
  arr.join("");
  return arr;
}

// Method 2
function reverse2(str) {
  reverse = "";
  for (let character of str) {
    reverse += character;
  }
  return reverse;
}

// Method 3
function reverse3(str) {
  return str.split("").reduce((rev, char) => rev + char, "");
}

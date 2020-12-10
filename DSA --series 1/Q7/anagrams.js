// anagrams are strings having same characters with same frequency

str1 = "rail safety";
str2 = "fairy tales";

function isAnagram(str1, str2) {
  chars1 = {};
  chars2 = {};

  for (char of str1) {
    if (!chars1[char]) chars1[char] = 1;
    else {
      chars1[char]++;
    }
  }

  for (char of str2) {
    if (!chars2[char]) chars2[char] = 1;
    else {
      chars2[char]++;
    }
  }
  flag = 1;
  for (elem in chars1) {
    if (chars1[elem] != chars2[elem]) {
      flag = -1;
    }
  }
  for (elem in chars2) {
    if (chars1[elem] != chars2[elem]) {
      flag = -1;
    }
  }

  if (flag == -1) {
    return false;
  } else {
    return true;
  }
}

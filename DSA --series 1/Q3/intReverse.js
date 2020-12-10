function reveresInt(number) {
  // ParseInt converts string to integer and to String converts object in string,reverse reverse array,split converts string to array ,join converts array to string
  reversedNumber = parseInt(number.toString().split("").reverse().join(""));
  return Math.sign(number) * reversedNumber;
}

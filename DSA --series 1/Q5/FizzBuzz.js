// for first 100 natural numbers  print fizz,buzz,fizzbuzz if number if divivsible by 3,5,3and5 respectively

for (let i = 1; i <= 100; i++) {
  if (i % 3 == 0 && i % 5 == 0) {
    console.log("fizzbuzz");
  } else if (i % 3 == 0) {
    console.log("fizz");
  } else if (i % 5 == 0) {
    console.log("buzz");
  } else {
    console.log(i);
  }
}

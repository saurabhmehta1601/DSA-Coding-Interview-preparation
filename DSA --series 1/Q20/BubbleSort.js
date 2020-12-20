// O(n^2)
// Take two loops swap adjacent elements


const a = [ 52, 23, 1, 7, 89, 5];

function sort(array){
    
for (let i = 0; i < a.length - 1; i++) {
    let flag = 0;
    for (let j = 0; j < a.length - 1 - i; j++) {
      if (a[j + 1] < a[j]) {
        flag = 1;
        let temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    if (flag === 0) {
      break;
    }
  }
  return array
}


console.log(sort(a))


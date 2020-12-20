// O(n^2)


// Start outer loop from i to n-2             Ends points are included
// in inner loop iterate from i+1 to n-1        Ends points are included

// swap the minimum number found in inner loop iteration with current
// element pointed by outer loop

const a = [1, 21, 6, 2, 4, 8];

function sort(array) {
  let n = array.length;
  for (let i = 0; i < n - 1; i++) {
    let min = array[i];
    let min_position = i;
    for (let j = i + 1; j < n; j++) {
      {
        if (min > array[j]) {
          min_position = j;
          min = array[j];
        }
      }
    }
    let temp = array[i];
    array[i] = array[min_position];
    array[min_position] = temp;
  }

  return array;
}

console.log(sort(a));

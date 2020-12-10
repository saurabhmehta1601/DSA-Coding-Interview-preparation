// divide array in array of subarrays of desired size

// Method 1
function chunkedArray(arr, size) {
  const chunked = []; //will contain all chunked subarrays

  for (let elem of arr) {
    last = chunked[chunked.length - 1]; //points to last subarray element in chunked

    if (!last || last.length === size) {  //if last doesn't exist or is full
     
      chunked.push([elem]); //created new subarray with array element and add to chunked
    } else {
      last.push(elem); //add arr elem to last subarray in chunked since not fully filled
    }
  }
  return chunked;
}
// Method 2 using slice

function myChunkedArray(arr, size) {
  const chunked = [];
  i = 0;
  while (i + size <= arr.length) {
    chunked.push(arr.slice(i, i + size)); //take 3 element subarray from array and add to chunked
    i += size;
  }
  chunked.push(arr.slice(i, arr.length)); // last subarray elements

  return chunked;
}

arr = [1, 23, 4, 5, 35, 53, 2, 2, 15];

b = chunkedArray(arr, 2);

c = myChunkedArray(arr, 2);
console.log(b);

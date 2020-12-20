// O(n*logn)

// Contains two methods merge and mergesort
// merge is iterative and mergesort is recursive

// Step 1 - Create results array
// Step 2 - While there are elements in both array
//              if the first element the left half is less than first in right half
//                  shift the elements from left into result arr
//              else
//                  shift the elements from result into rigth arr
// Step 3- Take everything from array that still has stuff in it and put it in result

const a = [1, 21, 6, 2, 4, 8];


function mergesort(array){
if(array.length===1){  //array with length 1 is always sorted
    return array
}

const mid=Math.floor(array.length/2) //finding mid point

const left=array.slice(0,mid) //first half of array
const right=array.slice(mid)  //second half of array

return merge(mergesort(left),mergesort(right)) // dividing arrays recursively 
}                                               //  and merging sorted subarrays



function merge(left, right) { // Takes two sorted arrays
  const result=[]
  while(left.length && right.length){
      if(left[0] < right[0] ){  // add first element having less value from both arrays to result and removing
          result.push(left.shift())  // from the array it was present in  
      }else{
          result.push(right.shift())
      }
  }
  return [...result,...left,...right] //either left or right will be empty by now 
}


console.log(mergesort(a))


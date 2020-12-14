// add all values of one array to another

let log=console.log

// Method - 1 which is wrong

/*
const a=[1,2,3] 
const b=[4,5,6]

a.push(b)      //will insert array inside of array
log(a)
*/

// Method - 2 which is general solution

/*
const a=[1,2,3] 
const b=[4,5,6]

for (let c of b){
    a.push(c)
}

log(a)
*/

// Method - 3 which is short solution

/*

const a=[1,2,3] 
const b=[4,5,6]

a.push(...b)

log(a)

*/

/*

// Printing on same line 

// array elements
a=[1,4,6,7,89]

console.log(...a)

// variables
b=13
c=57

console.log(b,c)

*/

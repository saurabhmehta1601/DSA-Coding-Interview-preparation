// generators in js

// iterating list using generators

/*
function *numbers(){
    yield 1
    yield 2
    yield 3
    yield 4
    yield 5
}

const values=numbers()

for( let value of values)
    console.log(value)  */

// using nested generators

/*
function *numbers(){
    yield 1
    yield *moreNumbers()
    yield 4
    yield 5
}
function *moreNumbers(){   
    yield 2
    yield 3
}


const values=numbers()

for( let value of values)
    console.log(value)  

    */


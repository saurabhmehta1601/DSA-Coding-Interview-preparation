// M1
function isPaliondrom(str){
    arr=str.split("")
    arr.reverse()
    reversed=arr.join("")
    if(reversed==str)
    return true
    else
    return false 
    }

// same function condensed
function isPeliondrome(str){
    const reversed=str.split("").reverse().join("")
    return reverse===str
}


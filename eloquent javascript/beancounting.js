/*

function countBs(a) {
    for (let index = 0; index < a.length; index++) {
        if (a[index] == "B") {
            counter++;
        }
    }
    return counter;
    
}

console.log(countBs("BBBBaB"));

*/
let counter = 0;

function countChar(string, char) {
    for (let index = 0; index < string.length; index++) {
        if (string[index] == char) {
            counter++;
        }
    }
    return counter;
}

console.log(countChar("valentin", "n"));
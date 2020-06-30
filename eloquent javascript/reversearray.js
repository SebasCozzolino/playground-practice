function reverseArray(array) {
    let result = [];
    for (let index = 0; index < array.length; index++) {
        result.push(array[(array.length - index - 1)]);
        console.log(result);
    }
    return result;
}

let test = [1, 20, 3, 40, 5];
//console.log(reverseArray(test));

function reverseArrayInPlace(array) {
    for (let index = 0; index < Math.floor(array.length / 2); index++) {
        let temp = array[index];
        array[index] = array[array.length - 1 - index];
        array[array.length - 1 - index] = temp;
    }

    return array;
}

console.log(reverseArrayInPlace(test));
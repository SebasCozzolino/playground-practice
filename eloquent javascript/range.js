function range(start, end, step = start < end ? 1 : -1) {
    let result = [];

    if (step > 0) {
        for (let index = start; index <= end; index += step) {
            result.push(index);
        }
    }
    else {
        for (let index = start; index >= end; index += step) {
            result.push(index);
        }
    }
    return result;
}

function sum(array) {
    let result = 0;
    for (let index = 0; index < array.length; index++) {
        result += array[index];
    }
    return result;
}

console.log(sum(range(1, 10, 2)));
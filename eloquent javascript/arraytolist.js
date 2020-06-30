function arrayToList(array) {
    var list = null;

    for (let index = array.length - 1; index >= 0; index--) {
        list = {
            value: array[index], rest: list
        };
    }
    return list;
}

let test = [1, 2, 3];

let list = {
    value: 1,
    rest: {
        value: 2,
        rest: {
            value: 3,
            rest: null
        }
    }
};

console.log(arrayToList(test));
console.log(list);
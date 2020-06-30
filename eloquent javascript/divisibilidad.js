for (let index = 1; index < 101; index++) {
    if ((index % 3) == 0 && (index % 5) == 0) {
        console.log(index + " es Divisible por 3 y 5");
    }
    else if ((index % 3) == 0) {
        console.log(index + " es Divisible por 3");
    }
    else if ((index % 5) == 0) {
        console.log(index + " es Divisible por 5");
    }
    else {
        console.log(index);
    }
}
function isEven(n) {
    if (n == 0) // Si n es igual a 0 => true
      return true;
    else if (n == 1) // Si n es igual a 1 => false
      return false;
    else if (n < 0) // Si n es menor a 0 (numero negativo) => devuelve -n a la función. - + - = +
      return isEven(-n);
    else
      return isEven(n - 2); //Si n no cumple las anteriores condiciones, se le resta 2 a n hasta que cumple las condiciones
  }

console.log(isEven(10));
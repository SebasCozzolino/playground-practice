def CelsiusToFahrenheit(celsius):
    fahrenheit = (celsius * (9/5) + 32)
    return round(fahrenheit)

def FahrenheitToCelsius(fahrenheit):
    celsius = ((fahrenheit - 32) * (5/9))
    return round(celsius, 2)

int main() {
    
    float temperaturaCelsius, temperaturaFahrenheit, temperaturaKelvin;

    
    printf("Inserisci la temperatura in Celsius: ");
    scanf("%f", &temperaturaCelsius);

    
    if (temperaturaCelsius < -273.15) {
        printf("Errore: La temperatura inserita è inferiore allo zero assoluto.\n");
    } else {
        
        temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32;
        temperaturaKelvin = temperaturaCelsius + 273.15;

       
        printf("Temperatura in Fahrenheit: %.2f\n", temperaturaFahrenheit);
        printf("Temperatura in Kelvin: %.2f\n", temperaturaKelvin);
    }

    return 0;
}
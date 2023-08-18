#include <iostream>

using namespace std;

int calculate_seconds(int hour, int min, int sec);

int main()
{

    int hour, min, sec;

    // Pedimos al usuario que inserte la hora
    do
    {
    cout << "Inserte la hora (sin minutos ni segundos): ";
    cin >> hour;
    if (hour < 0 || hour > 23)
    {
        cout << "Hora inválida\n";
    }
    }
    while (hour < 0 || hour > 23);
    
    // Pedimos al usuario que inserte los minutos
    do
    {
    cout << "Inserte los minutos: ";
    cin >> min;
    if (min < 0 || min > 59)
    {
        cout << "Minutos inválidos\n";
    }
    }
    while (min < 0 || min > 59);

    // Pedimos al usuario que inserte los segundos
    do
    {
    cout << "Inserte los segundos: ";
    cin >> sec;
    if (sec < 0 || sec > 59)
    {
        cout << "Segundos inválidos\n";
    }
    }
    while (sec < 0 || sec > 59);

    // Llamamos a `calculate_seconds` para calcular e imprimir el resultado
    cout << "Pasaron " << calculate_seconds(hour, min, sec) << " segundos desde las 00:00:00\n";

    // Finalizamos el programa
    return 0;
}


// Implementación de la función que calcula los segundos que pasaron desde medianoche
int calculate_seconds(int hour, int min, int sec)
{
    int passed_seconds = (hour * 3600) + (min * 60) + sec;

    return passed_seconds;
}

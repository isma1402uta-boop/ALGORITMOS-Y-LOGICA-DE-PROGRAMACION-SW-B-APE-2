#include <iostream>

using namespace std;

int main() {
    int horas, minutos, segundos;
    char respuesta;

    do {
        cout << "\n--- Registro de Hora (Validado) ---" << endl;

        // Bucle para validar horas
        do {
            cout << "Ingrese horas (0-23): ";
            cin >> horas;
            if (horas < 0 || horas > 23) {
                cout << " ERROR: El rango permitido es 0-23. Intente de nuevo." << endl;
            }
        } while (horas < 0 || horas > 23);

        // Bucle para validar minutos
        do {
            cout << "Ingrese minutos (0-59): ";
            cin >> minutos;
            if (minutos < 0 || minutos > 59) {
                cout << " ERROR: El rango permitido es 0-59." << endl;
            }
        } while (minutos < 0 || minutos > 59);

        // Bucle para validar segundos
        do {
            cout << "Ingrese segundos (0-59): ";
            cin >> segundos;
            if (segundos < 0 || segundos > 59) {
                cout << " ERROR: El rango permitido es 0-59." << endl;
            }
        } while (segundos < 0 || segundos > 59);

        cout << "\nHora registrada correctamente: " << horas << ":" << minutos << ":" << segundos << endl;

        cout << "\n¿Desea cambiar la hora registrada? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    cout << "Sistema cerrado correctamente." << endl;

    return 0;
}

#include <iostream>

using namespace std;

class Calculadora {
    private:
        float numero_Uno;
        float numero_Dos;
        float resultado;
        int operacion;

    public:Calculadora() {
        this->numero_Uno = 0.0f;
        this->numero_Dos = 0.0f;
        this->resultado = 0.0f;
        this->operacion = 0;
    }

    Calculadora(float numero_Uno, float numero_Dos) {
        this->numero_Uno = numero_Uno;
        this->numero_Dos = numero_Dos;
    }

    void operaciones(int operacion) {
        this->operacion = operacion;
    }

    void operando() {
        switch (this->operacion)
        {
        case 1:
            this->resultado = this->numero_Uno + this->numero_Dos;
            break;
        case 2:
            this->resultado = this->numero_Uno - this->numero_Dos;
            break;
        case 3:
            this->resultado = this->numero_Uno * this->numero_Dos;
            break;
        case 4:
            this->resultado = this->numero_Uno / this->numero_Dos;
            break;
        default:
            cout << "Opcion no encontrada." << endl;
            break;
        }
    }

    float obtener_Resultado() {
        return this->resultado;
    }
};

int main()
{
    int operacion;
    float numero_Uno, numero_Dos, resultado;

    cout << "Ingrese un primer valor: ";
    cin >> numero_Uno;

    cout << "Ingrese un segundo valor: ";
    cin >> numero_Dos;

    cout << "\nSelecciona una operacion: \n  1) Suma \n  2) Resta \n  3) Multiplicacion \n  4) Division" << endl;
    cout << "\nSeleccion: ";
    cin >> operacion;

    Calculadora calculator(numero_Uno, numero_Dos);
    calculator.operaciones(operacion);
    calculator.operando();

    resultado = calculator.obtener_Resultado();
    cout << "\n\nEl resultado es: " << resultado << endl;

    system("pause");
    return 0;
}

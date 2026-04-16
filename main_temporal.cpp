#include <iostream>
#include "Persona.hpp"
#include "Empleado.hpp"
#include "Cliente.hpp"
using namespace std;
int main() {
    cout << "=== PRUEBA PERSONA ===" << endl;
    Persona p("Juan", "Perez", "123", "555-1234");
    p.mostrarInfo();
    
    cout << "\n=== PRUEBA EMPLEADO ===" << endl;
    Empleado e("Ana", "Lopez", "456", "555-5678", "Gerente", 1500);
    e.mostrarInfo();
    e.actualizarSalario(1800);
    cout << "Nuevo salario: " << e.getSalario() << endl;
    
    cout << "\n=== PRUEBA CLIENTE ===" << endl;
    Cliente c("Carlos", "Ruiz", "789", "555-9012", "carlos@mail.com");
    c.mostrarInfo();
    cout <<"Enter para salir"<<endl;
    cin.get();
    cin.get();
    return 0;
}
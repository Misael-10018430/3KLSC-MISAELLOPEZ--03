#include <iostream>

int main()
{
    int numeros[6] = { 10, 20, 30, 40, 50, 60 };
    int n[] = { 3, 4, 5 };
    char c[] = { 'L', 'u', 'i', 's', '\0' }; 
    char s[] = "Mona lisa";

    std::cout << "Primer elemento de numeros: " << numeros[0] << std::endl;
    std::cout << "Primer elemento de n: " << n[0] << std::endl;
    std::cout << "Cadena c: " << c << std::endl;
    std::cout << "Cadena s: " << s << std::endl;

    return 0;
}

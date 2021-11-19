#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int contador = 0; //Verifica cuantos multiplos de 13 existen entre el 0 al 10000 (770)
    for (int i = 0; i < 10000; i++)
    {
        if (i % 13 == 0)
        {
            contador++;
        }
    }
    cout << contador << endl;
    return 0;
}

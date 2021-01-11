#include <stdio.h>

int main(){
    printf("Holi, estos son los tipos de datos en C :)");
    return 0;
}

/* Basic types: 
    (A) Aritmeticos - valores enteros
        char 1 byte, -128 to 127
        unsigned char 1 byte, 0 to 255

        int 2 a 4 bytes (el estándar para int es de 4 bytes)
        Comprende números negativos y positivos en los sig. rangos:
        2 Bytes -32,768 to 32,767
        4 bytes -2,147,483,648 to 2,147,483
        
        unsigned int no permite tener números negativos, rangos:
        2 Bytes 0 to 65,535
        4 bytes 0 to 4,294,967,295

        short está estandirazado en 2 bytes, -32,768 to 32,767
        unsigned short 2 Bytes 0 to 65,535

        long 8 bytes, -9223372036854775808 to 9223372036854775807
        unsigned long 8 bytes, 0 to 18446744073709551615

    (B) Aritmeticos - De punto flotante float
        (Escritos con notación científica, https://es.science19.com/what-is-e10-11567)
        float 4 bytes, 1.2E-38 to 3.4E+38              6 decimal places (6 datos después del punto)
        double 8 bytes, 2.3E-308 to 1.7E+308          15 decimal places (15 datos después del punto)
        long double 10 bytes, 3.4E-4932 to 1.1E+4932  19 decimal places (19 datos después del punto)

    void: Específica que no hay valor disponible, se usa en 3 escenarios:
        1. Una función que retorna un tipo de datos void. Quiere decir que al ejecutar la función no retorna ningún valor.
        2. Una función que tiene argumentos de tipo void. Quiere decir que la función no acepta ningún parámetro.
        3. Un puntero o apuntador que va a la dirección en memoria de un objeto, pero no le importa el tipo de dato que tenga.
           Quiere decir que puedes apuntar a una dirección de memoria para obtener un dato, pero no necesariamente te dirá el tipo
           dato con el que se está trabajando */
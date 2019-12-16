# Ejercicios para aprendizaje de Lenguaje C

## Tipos de variables
| **Tipo de Variable** | **Longitud** |              **Valores** |
| :------------------- | :----------: | -----------------------: |
| *int*                |   4 bytes    |                  Enteros |
| *float*              |   4 bytes    | Racionales, Irracionales |
| *double*             |   8 bytes    |    Flotante de presicion |
| *char*               |    1 byte    |         Caracteres ascii |

> **Nota:** No se debe depender de las longitudes de los datos ya que estas pueden variar segun la implantacion.

----

## Estructuras de control y operadores

----

## Arreglos numericos

-----

## Arreglos de caracteres (Cadenas) y Constantes simbolicas

Favor de compilar el archivo *./Cadenas/entrada_salida_caracteres.c* y comprobar la demostracion de funcionamiento de las funciones getchar y putchar.

En caso de que existan dudas sobre el funcionamiento de lo demostrado, indicarlo en el Readme.md del Branch master.

**TODO LIST**
- [x] Basado en la demostracion del archivo indicado, favor de crear el archivo *cuenta_caracteres.c* en el subdirectorio *Cadenas*

> El programa debera imprimir los caracteres leidos y en otra linea el numero de caracteres leidos.

- [x] Basado en el archivo cuenta caracteres, crear un nuevo archivo que cuente unicamente los espacios. El nuevo proceso debera imprimir unicamente el numero espacios que conto despues del input del usuario.
- [x] Crear un proceso que se encargue de leer el input del usuario y por cada caracter *'o', 'O'* debera imprimir uno mas en la salida es decir:
    - **Linea 1:** Amigo imprime Amigo
    - **Linea 2:** Carro imprime Carroo
    - **Linea 3:** Hombro imprime Hooombroooo

> Como nivel de dificultad extra: Si el proceso detecta la palabra exit debera dejar de leer y terminar su ejecucion.

- [x] Compilar el archivo cuenta_lineas.c que se encuentra en el directorio Cadenas. Observar su funcionamiento e implementacion.

> Futuras implementaciones deberan usar constantes simbolicas donde sea plausible

> Como nivel de dificultad extra: Si el proceso detecta la palabra exit debera dejar de leer y terminar su ejecucion.
-----
## Funciones

Favor de observar la implementacion del archivo getLine.c en el subdirectorio cadenas.

Una funcion, definida en el lexico de la programacion es un fragmento de codigo que cumple una tarea definida. Este bloque es convenientemente delimitado y se le asigna un nombre, un tipo de retorno y parametros.

*Ejemplo de un funcion:* 
![Image File](data:image/jpeg;base64,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)

Asi pues, se debe declarar un prototipo de funcion antes de poder hacer uso de esta:
```C
int getLine(char array[]);
```

Procedemos a explicar cada parte de la funcion:

- **Tipo de Retorno:**
    ```C
    int
    ```
    Se trata de el resultado posterior a la ejecucion del bloque de codigo correspondiente a la funcion, en este caso la funcion nos indica que regresara un resultado de tipo entero.
- **Nombre de la funcion:**
    
    `getLine`
    Es el nombre de la funcion y se usa para llamar a su ejecucion proporcionando los parametros adecuados como se ve en el siguiente punto.
- **Parametros de funcion**
    ```C
    (char array[]);
    ```
    Los parametros de una funcion son la entrada que esta necesita para trabajar adecuadamente, sin estos es posible que el trabajo que se desempeña no podria ser completado con normalidad.
    
    En la declaracion del prototipo de funcion se observan especificados los tipos de datos que vendran como parametros, sin embargo para hacer una llamada a la funcion bastara con usar su nombre y especificar unicamente los nombres de las variables que fungiran como parametros.
    *Ejemplo:*
    ```C
    int getLine(char array[]);
    char arregloCaracteres[10];

    while(getLine(arregloCaracteres) != EOF)
    .
    .
    .
    ```

**TODO LIST**
- [ ] Observar Implementacion de cadenas/getLines.c
- [ ] Verificar si la implementacion del calculo de temperatura para los programas de conversion de temperatura puede ser sustituida por una funcion y de ser el caso implementar cambios.

> Recuerde que se debe tener en cuenta la implementacion haciendo uso de Constantes simbolicas.

- [ ] Como nueva tarea de alta dificultad desarrolle una funcion que use los principios de getLine para leer de la entrada la palabra exit.

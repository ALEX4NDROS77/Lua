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

- [ ] Basado en el archivo cuenta caracteres, crear un nuevo archivo que cuente unicamente los espacios. El nuevo proceso debera imprimir unicamente el numero espacios que conto despues del input del usuario.
- [ ] Crear un proceso que se encargue de leer el input del usuario y por cada caracter *'o', 'O'* debera imprimir uno mas en la salida es decir:
    - **Linea 1:** Amigo imprime Amigo
    - **Linea 2:** Carro imprime Carroo
    - **Linea 3:** Hombro imprime Hooombroooo

> Como nivel de dificultad extra: Si el proceso detecta la palabra exit debera dejar de leer y terminar su ejecucion.

- [ ] Compilar el archivo cuenta_lineas.c que se encuentra en el directorio Cadenas. Observar su funcionamiento e implementacion.

> Futuras implementaciones deberan usar constantes simbolicas donde sea plausible

> Como nivel de dificultad extra: Si el proceso detecta la palabra exit debera dejar de leer y terminar su ejecucion.

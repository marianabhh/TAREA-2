En este código se incluyen las bibliotecas necesarias para el manejo de entrada y salida, generación de números aleatorios y medición de tiempo. Se declaran las funciones que se utilizarán en el programa, como generar números aleatorios, ordenar arreglos, copiarlos e imprimirlos. En la función principal, se le solicita al usuario que ingrese el tamaño del arreglo, asegurándose con una validación de que el número esté entre 1 y 100000. Se crean tres arreglos: uno para los datos originales generados aleatoriamente y dos copias para aplicar los métodos de ordenamiento. El arreglo original se llena con valores aleatorios entre 0 y 99. Luego, se copian esos datos a los otros dos arreglos para que ambos algoritmos trabajen con los mismos valores. Si el tamaño del arreglo es 20 o menor, se imprime el contenido del arreglo original antes de ordenarlo. Se mide el tiempo que tarda en ejecutarse el algoritmo de Bubble Sort y se guarda el resultado en segundos. Después, se mide el tiempo de ejecución del algoritmo de Selection Sort de la misma manera. Se imprimen los tiempos obtenidos para ambos métodos de ordenamiento. Si el arreglo tiene 20 elementos o menos, también se muestran los resultados ya ordenados por cada algoritmo para compararlos. El programa finaliza devolviendo cero como señal de finalización correcta. La función que genera el arreglo llena cada posición con un número aleatorio usando la función rand. La función de Bubble Sort recorre el arreglo comparando pares de elementos y los intercambia si están desordenados, repitiendo esto hasta que el arreglo quede ordenado. La función de Selection Sort busca el elemento más pequeño en cada pasada y lo coloca en su lugar correspondiente al inicio del subarreglo desordenado. La función para copiar arreglos simplemente transfiere los valores de un arreglo a otro uno por uno. Finalmente, la función para imprimir recorre el arreglo y muestra cada valor seguido de un espacio.
**Ejemplo de salida para arreglo de tamaño 10**
Digite la cantidad de elementos (entre 1 y 100000): 10

Arreglo generado: 41 67 87 5 14 25 96 81 37 44 

Resultados para arreglo de tamaño 10:
Ordenamiento Burbuja:     0.000002 segundos
Ordenamiento por Selección: 0.000001 segundos

Ordenado con Burbuja: 5 14 25 37 41 44 67 81 87 96 
Ordenado con Selección: 5 14 25 37 41 44 67 81 87 96 

**Ejemplo de salida para arreglo de tamaño 100**
Digite la cantidad de elementos (entre 1 y 100000): 100

Resultados para arreglo de tamaño 100:
Ordenamiento Burbuja:     0.000026 segundos
Ordenamiento por Selección: 0.000015 segundos

**Ejemplo de salida para arreglo de tamaño 1000**
Digite la cantidad de elementos (entre 1 y 100000): 1000

Resultados para arreglo de tamaño 1000:
Ordenamiento Burbuja:     0.001911 segundos
Ordenamiento por Selección: 0.000940 segundos

**Ejemplo de salida para arreglo de tamaño 10000**
Digite la cantidad de elementos (entre 1 y 100000): 10000

Resultados para arreglo de tamaño 10000:
Ordenamiento Burbuja:     0.174338 segundos
Ordenamiento por Selección: 0.094805 segundos

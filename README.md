# Ejercicio #1: 3D - Object
Diseñar un sistema que permita gestionar diferentes tipos de objetos tridimensionales (como esferas, cubos y pirámides) y realizar operaciones comunes sobre ellos, tales como calcular el volumen, el área de superficie, y comparar estos objetos según sus propiedades geométricas.

## Objetivos
Desarrollar un sistema en C++ para gestionar objetos tridimensionales, facilitando la realización de cálculos geométricos y comparaciones entre diferentes tipos de objetos, utilizando polimorfismo y una sobrecarga de operadores avanzada.

## Requerimientos
### Parte #1

### Clase Base Object3D:

- Método público virtual puro que devuelva el volumen (`volume()`) del objeto.
- Método público virtual puro que devuelva el área (`surface()`) de la superficie del objeto.
- Sobrecargar el operador `<<` para mostrar información relevante del objeto (
    `type`, `volume`, `surface`).

### Clases Derivadas:

### Sphere:
Atributo específico: `radio (double)`.  
Implementar los métodos para calcular volumen (`volume`) y área (`surface`) específicos para una esfera.
### Cube:
Atributo específico: `side (double)`.  
Implementar los métodos para calcular volumen (`volume`) y área (`surface`) específicos para un cubo.
### Pyramid:
Atributos específicos: `base  (double)`, `height (double)`.  
Implementar los métodos para calcular volumen (`volume`) y área (`surface`) específicos para una pirámide.

## Sobrecarga de Operadores:
- Sobrecarga del operador `==` para comparar si dos objetos 3D tienen el mismo volumen.
- Sobrecarga del operador `!=` para complementar la comparación de igualdad.
- Sobrecarga de los operadores `>` y `<` para comparar objetos basándose en su volumen, permitiendo identificar cuál tiene mayor o menor volumen.

## Implementación:
Crear objetos de cada tipo (Sphere, Cube, Pyramid) y demostrar el uso de polimorfismo y sobrecarga de operadores para realizar cálculos y comparaciones.
Utilizar un vector de punteros a la clase base Objeto3D para almacenar los diferentes objetos y manipularlos de manera uniforme.
Implementar una función para recorrer el vector, mostrar la información de cada objeto y las comparaciones entre ellos usando las sobrecargas de operadores.

## Pruebas:
1. Pruebas de Creación de Objetos
   - Pruebas de Constructor: Verificar que los objetos de cada clase derivada (Esfera, Cubo, Pirámide) se crean correctamente con los parámetros proporcionados.
   - Pruebas de Valores Iniciales: Asegurar que los atributos de los objetos se inicializan correctamente según los valores pasados al constructor.
2. Pruebas de Cálculo de Volumen
   - Pruebas de Exactitud: Comprobar que el método calcularVolumen de cada clase derivada devuelve el valor correcto del volumen. Esto podría incluir casos de prueba con valores conocidos (por ejemplo, el volumen de una esfera de radio 1).
   - Pruebas de Límites: Evaluar cómo se comporta el cálculo del volumen en condiciones límite (como un radio o lado de longitud cero o valores muy grandes).
3. Pruebas de Cálculo de Área de Superficie
   - Pruebas de Exactitud: Similar a las pruebas de volumen, estas pruebas verificarían que el área de superficie calculada es correcta para varios casos de prueba con valores conocidos.
   - Pruebas de Límites: Comprobar el comportamiento del cálculo del área de superficie en condiciones límite.
4. Pruebas de Sobrecarga de Operadores
   - Pruebas de operator<<: Verificar que la sobrecarga del operador << muestra correctamente la información del objeto, incluyendo el tipo de objeto, el volumen, y el área de superficie.
   - Pruebas de operator== y operator!=: Comprobar que estos operadores comparan correctamente dos objetos basándose en sus volúmenes (o cualquier otro criterio definido).
   - Pruebas de operator> y operator<: Asegurar que la comparación de magnitudes entre objetos se realiza correctamente.
5. Pruebas de Escenarios Combinados
   - Pruebas de Interacción entre Objetos: Crear pruebas que involucren la interacción entre diferentes objetos 3D, como comparar un cubo con una esfera, para asegurar que las comparaciones y cálculos son coherentes entre tipos.
   - Pruebas de Colecciones de Objetos: Verificar que una colección (por ejemplo, un vector) de punteros a Objeto3D maneja correctamente objetos de diferentes tipos, permitiendo operaciones como la inserción, eliminación, y recorrido para realizar cálculos o comparaciones.
   - Estrategias Generales para la Implementación de Pruebas
   - Utilizar un Framework de Pruebas: Implementar estas pruebas usando un framework de pruebas unitarias para C++, como Catch2, Google Test, facilita la escritura, ejecución y mantenimiento de las pruebas.
      Automatización: Automatizar la ejecución de las pruebas para que se ejecuten como parte del proceso de integración continua, asegurando que se detecten los errores tan pronto como sean introducidos en el código.
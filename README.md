## Punto 2 - Archivo .gitignore

### a) Investigación

- El archivo `.gitignore` se utiliza para indicarle a Git qué archivos o carpetas no deben subirse al repositorio.
- Es conveniente incluirlo para evitar compartir archivos innecesarios, como temporales, configuraciones locales, archivos compilados, etc.
- Se debe crear al inicio del proyecto o cuando se detecta que hay archivos que no deberían estar versionados.
- Para configurarlo, se agregan los nombres o patrones de archivos a ignorar.  
  Ejemplo: `ignorado.txt` para que Git ignore ese archivo.

### b) Respuestas escritas en este archivo (`README.md`) como indica el enunciado.

## Punto 3 - Archivo tp1_1.c.

### g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md

1. El resultado de los puntos 2 y 3 es el mismo porque ambos muestran la dirección de memoria de la variable `miVariable`.
2. El punto 4 muestra la dirección de memoria del puntero `miPuntero` en sí, que es diferente a la dirección de memoria de la variable a la que apunta.
3. No, el punto 4 no es igual a los puntos 2 y 3 porque muestra la dirección de memoria de una variable diferente (el puntero en lugar de la variable entera).
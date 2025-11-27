
````markdown
# Instrucción `switch` en C
📅 02/04/2023  

Las instrucciones **`switch`** y **`case`** permiten controlar operaciones condicionales y bifurcaciones complejas en C.  
La instrucción `switch` transfiere el control a una instrucción dentro de su cuerpo dependiendo del valor de la expresión evaluada.

---

## 📌 Sintaxis

```c
// Estructura general
switch ( expression ) statement

// Declaraciones con etiquetas
case constant-expression : statement
default : statement
````

---

## 📖 Descripción

* Una instrucción `switch` transfiere el control a la instrucción **labeled-statement** correspondiente según el valor de `expression`.
* Tanto `expression` como cada `constant-expression` deben ser de tipo **entero**.
* Una `constant-expression` debe tener un valor entero constante conocido en tiempo de compilación.
* Dentro de un mismo `switch`, los valores de `case` deben ser **únicos** (no se permiten duplicados).
* La ejecución comienza en la primera coincidencia y continúa hasta:

  * Encontrar un `break`, o
  * Llegar al final del bloque.

---

## 📝 Ejemplo básico

```c
switch ( expression )
{
    // declaraciones
    case constant_expression:
        // instrucciones si se cumple el case
        break;

    default:
        // instrucciones si no coincide ningún case
}
```

---

## ⚙️ Funcionamiento del `break`

* La instrucción `break` **termina la ejecución** de un `case` específico y transfiere el control fuera del `switch`.
* Si no se incluye `break`, el programa continúa ejecutando las siguientes instrucciones (`fall-through`).
* El comportamiento de `fall-through` puede ser útil en ciertas situaciones.

---

## 🔀 Instrucción `default`

* Se ejecuta cuando **ningún `case` coincide** con el valor de `expression`.
* Es opcional.
* Puede colocarse en cualquier parte del cuerpo de la instrucción `switch` (no necesariamente al final).
* Solo puede existir **una instrucción `default`** por cada `switch`.

---

## 📌 Consideraciones importantes

* El tipo de `switch expression` y de cada `case constant-expression` debe ser **entero**.
* Las etiquetas `case` y `default` solo tienen sentido durante la evaluación inicial que determina el punto de entrada.
* Se pueden anidar varias instrucciones `switch`.
* Las variables estáticas se inicializan **antes** de ejecutar cualquier instrucción `switch`.

> ⚠️ **Nota**: Las declaraciones pueden aparecer en el encabezado del bloque de `switch`, pero sus inicializaciones **no se ejecutan**, ya que el control salta directamente a la instrucción etiquetada.

---

## 📂 Ejemplos de uso

### 🔹 Ejemplo 1: Sin `break` (fall-through)

```c
switch( c )
{
    case 'A':
        capital_a++;
    case 'a':
        letter_a++;
    default:
        total++;
}
```

👉 Si `c == 'A'`: se ejecutan **las tres instrucciones**.
👉 Si `c == 'a'`: se ejecutan `letter_a++` y `total++`.
👉 Si no es ni `'A'` ni `'a'`: solo se ejecuta `total++`.

---

### 🔹 Ejemplo 2: Con `break`

```c
switch( i )
{
    case -1:
        n++;
        break;
    case 0:
        z++;
        break;
    case 1:
        p++;
        break;
}
```

👉 Si `i == -1`: solo se ejecuta `n++`.
👉 Si `i == 0`: solo se ejecuta `z++`.
👉 Si `i == 1`: solo se ejecuta `p++`.

El `break` final no es obligatorio, pero se recomienda por consistencia.

---

### 🔹 Ejemplo 3: Múltiples etiquetas para un mismo bloque

```c
switch( c )
{
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
        convert_hex(c);
}
```

👉 Si `c` es cualquier letra entre `'a'` y `'f'`, se ejecuta `convert_hex(c)`.


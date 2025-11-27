# Instrucción switch (C)
02/04/2023
Las instrucciones switch y case ayudan a controlar las operaciones condicionales y de bifurcación complejas. La instrucción switch transfiere el control a una instrucción dentro del cuerpo.

### Sintaxis
selection-statement:
  switch ( expression ) statement

labeled-statement:
  case constant-expression : statement
  default : statement

### Comentarios
Una instrucción switch hace que el control se transfiera a una instrucción labeled-statement en el cuerpo de la instrucción, en función del valor de expression .

Los valores de expression y cada constant-expression deben tener un tipo entero. Una constant-expression debe tener un valor entero constante no ambiguo en tiempo de compilación.

El control pasa a la instrucción case cuyo valor constant-expression coincide con el valor de expression . La instrucción switch puede incluir cualquier número de instancias de case . Aun así, dos valores constant-expression dentro de la misma instrucción switch no pueden tener el mismo valor. La ejecución del cuerpo de la instrucción switch comienza en la primera instrucción dentro o después de la instrucción labeled-statement correspondiente. La ejecución continúa hasta el final del cuerpo o hasta que una instrucción break transfiere el control fuera del cuerpo.

El uso de la instrucción switch suele tener una apariencia similar a lo siguiente.

#### Ejemplo:
switch ( expression )
{
    // declarations
    // . . .
    case constant_expression:
        // statements executed if the expression equals the
        // value of this constant_expression
        break;
    default:
        // statements executed if expression does not equal
        // any case constant_expression
}

### Continuacion:
Puede usar la instrucción break para finalizar el procesamiento de una instrucción con etiqueta concreta dentro de la instrucción switch . Se bifurca al final de la instrucción switch . Sin break , el programa continúa a la siguiente expresión con etiqueta y ejecuta las instrucciones hasta una instrucción break o hasta que se alcance el final de la instrucción. Esta continuación puede ser deseable en algunas situaciones.

La instrucción default se ejecuta si ningún valor caseconstant-expression es igual al valor de expression. Si no hay ninguna instrucción default y no se encuentra ninguna instrucción case coincidente, no se ejecuta ninguna de las instrucciones del cuerpo switch . Puede haber a lo sumo una instrucción default . No es necesario que la instrucción default aparezca al final. Puede aparecer en cualquier parte del cuerpo de la instrucción switch . Una etiqueta case o default solo puede aparecer en una instrucción switch .

El tipo de switchexpression y caseconstant-expression debe ser entero. El valor de cada caseconstant-expression debe ser único dentro del cuerpo de instrucción.

Las etiquetas case y default del cuerpo de instrucción switch solo tienen sentido en la prueba inicial que determina dónde se inicia la ejecución en el cuerpo de instrucción. Las instrucciones switch se pueden anidar. Cualquier variable estática se inicializa antes de ejecutar cualquier instrucción switch.

#### Nota

Las declaraciones pueden aparecer en el encabezado de la instrucción compuesta que constituye el cuerpo de switch, pero las inicializaciones incluidas en las declaraciones no se realizan. La instrucción switch transfiere el control directamente a una instrucción ejecutable dentro del cuerpo y omite las líneas que contienen inicializaciones.

### En los siguientes ejemplos de código se muestran instrucciones switch:

#### EJ.1
switch( c )
{
    case 'A':
        capital_a++;
    case 'a':
        letter_a++;
    default :
        total++;
}


En este ejemplo, las tres instrucciones del cuerpo de switch se ejecutan si c es igual a 'A', ya que no aparece una instrucción break antes de la siguiente instrucción case . El control de la ejecución se transfiere a la primera instrucción (capital_a++;) y continúa en orden con el resto del cuerpo. Si c es igual a 'a', se incrementan letter_a y total. Solo se incrementa total cuando c no es igual a 'A' o 'a'.

#### EJ.2
switch( i )
{
    case -1:
        n++;
        break;
    case 0 :
        z++;
        break;
    case 1 :
        p++;
        break;
}
En este ejemplo, una instrucción break sigue a cada instrucción del cuerpo de switch . La instrucción break fuerza una salida del cuerpo de instrucción tras ejecutar una instrucción. Si i es igual a -1, solo se incrementa n. La instrucción break que sigue a la instrucción n++; hace que el control de la ejecución salga del cuerpo de instrucción y omita las instrucciones restantes. De igual forma, si i es igual a 0, solo se incrementa z; si i es igual a 1, solo se incrementa p. La instrucción break final no es estrictamente necesaria, puesto que el control sale del cuerpo al final de la instrucción compuesta. Se incluye por coherencia.

Una sola instrucción puede contener varias etiquetas case , como se muestra en el ejemplo siguiente:

#### EJ.3
switch( c )
{
    case 'a' :
    case 'b' :
    case 'c' :
    case 'd' :
    case 'e' :
    case 'f' :  convert_hex(c);
}
En este ejemplo, si constant-expression es cualquier letra entre 'a' y 'f', se llama a la función convert_hex.
// Calcula el maximo comun divisor de dos numeros naturales > 0. 
// Por ejemplo, la salida esperada para 42 y 56 es 14.
{
  int x; int y;
  int n; int m;

  read(x); read(y);
  while (x != y) {
    if ( x > y)
      { n = y; m = x - y; }
    else { n = x; m = y - x; }
    x = n; y = m;
  }
  print(x);
}

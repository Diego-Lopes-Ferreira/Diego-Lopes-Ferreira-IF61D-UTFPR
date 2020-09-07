/*
  Calcular o dia da semana de uma data entre 1 de março de 1700 e 28 de
  fevereiro de 2100, utilizando o seguinte método: n = (int)(365.25 * g) +
  (int)(30.6 * f) - 621049 + d; ds = round( frac(n/7) * 7) + delta + 1;
    // sendo:
    d => dia
    m => mes
    a => ano
    ds => dia da semana indexOf - [segunda, terca, quarta, quinta, sexta,
  sabado, domingo]

    g = m <= 2 ? a-1 : a;
    f = m <= 2 ? m+13 : m+1;
    delta = {
      if (n < 36523)
       return 2;
      if (n < 73048)
       return 1;
      else
        return 0
    }

  entradas:

  saidas:

  processamento:

*/
#include <stdio.h>

float frac

    int
    main() {
  return 0;
}
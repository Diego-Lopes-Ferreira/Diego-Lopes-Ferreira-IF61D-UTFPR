'''
2. Calcular a média final obtida por um aluno, para 4 notas bimestrais.

  entradas:
    n1, n2, n3, n4
  
  saida:
    media
  
  processamento:
    obter nota 1
    obter nota 2
    obter nota 3
    obter nota 4
    fazer a media:
      (n1 + n2 + n3 + n4) / 4 = media
'''

n1 = int(input('Nota no - Primeiro Bimestre : '))
n2 = int(input('Nota no - Segundo Bimestre  : '))
n3 = int(input('Nota no - Terceiro Bimestre : '))
n4 = int(input('Nota no - Quarto Bimestre   : '))

media = (n1 + n2 + n3 + n4) / 4

print('A media é: ' + str(media))

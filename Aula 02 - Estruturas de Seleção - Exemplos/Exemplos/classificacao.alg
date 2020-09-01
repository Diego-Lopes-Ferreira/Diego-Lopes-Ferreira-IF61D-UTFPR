algoritmo "exerc�cio 05 - atividade 1"

var
  r: caracter

inicio
  escreval("Digite sempre sim ou n�o para as respostas")
  escreva("O animal � mam�fero? ")
  leia(r)
  se r = "sim" entao
    escreva("� quadr�pede? ")
    leia(r)
    se r = "sim" entao
      escreva("� carn�voro? ")
      leia(r)
      se r = "sim" entao
        escreval("LEAO")
        senao
          escreval("CAVALO")
      fimse
      senao
        escreva("� b�pede? ")
        leia(r)
        se r = "sim" entao
          escreva("� on�voro? ")
          leia(r)
          se r = "sim" entao
            escreval("HOMEM")
            senao
              escreval("MACACO")
          fimse
          senao
            escreva("� voador? ")
            leia(r)
            se r = "sim" entao
              escreval("MORCEGO")
              senao
                escreval("BALEIA")
            fimse
        fimse
    fimse
    senao
      escreva("� ave? ")
      leia(r)
      se r = "sim" entao
        escreva("� n�o-voadora? ")
        leia(r)
        se r = "sim" entao
          escreva("� tropical? ")
          leia(r)
          se r = "sim"
            entao
              escreval("AVESTRUZ")
            senao
              escreval("PING�IM")
          fimse
          senao
            escreva("� nadadora? ")
            leia(r)
            se r = "sim" entao
              escreval("PATO")
              senao
                escreval("�GUIA")
            fimse
        fimse
      senao
        escreva("possui casco? ")
        leia(r)
          se r = "sim" entao
            escreval("TARTARUGA")
            senao
              escreva("� carn�voro? ")
              leia(r)
              se r = "sim" entao
                escreval("CROCODILO")
                senao
                  escreval("COBRA")
              fimse
          fimse
      fimse
  fimse

fimalgoritmo

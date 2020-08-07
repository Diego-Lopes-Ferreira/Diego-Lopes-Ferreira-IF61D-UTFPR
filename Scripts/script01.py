from random import randint
essays = list()

codeList = []

count = 0
language = 'en'


class book:
    def __init__(self, cod, name, author, category, accessN):
        '''Class that creates books, with: An internal code (auto) Name, Author and Category(manual)'''
        global count
        self.cod = cod
        self.name = name.lower()
        self.author = author.lower()
        self.cat = category.lower()
        self.accessN = accessN
        self.booked = False
        self.whoBooked = ''


    def showPT(self):
        print('\n|Codigo interno  :', self.cod)
        print('|Nome da obra    :', self.name.title())
        print('|nome do autor   :', self.author.title())
        print('|categoria       :', self.cat.capitalize(), '\n')
    

    def showEN(self):
        print('\n|Internal code   :', self.cod)
        print('|Name of eBook   :', self.name.title())
        print('|Name of author  :', self.author.title())
        print('|category        :', self.cat.capitalize(), '\n')


    def show(self, lang):
        lang = lang.lower()
        if lang == 'pt' or lang == 'portugues':
            self.showPT()
        if lang == 'en' or lang == 'english':
            self.showEN()


def createCodeList():
    global codeList
    for essay in essays:
        codeList.append(essay.cod)
    for i in codeList:
        print(i, end=', ')

def showEssays():
    for i in essays:
        i.show(language)


def showEssaysByCat(category):
    category = category.lower()
    for essay in essays:
        if essay.cat == category:
            essay.show(language)


def searchByCod(codigo):
    for essay in essays:
        if codigo == str(essay.cod):
            #print('Achei:')
            essay.show(language)


def searchByName(name):
    for essay in essays:
        if name == essay.name:
            essay.show(language)


createCodeList()


message = 'a'
while(message != ''):
    message = input('// ')
    verifier1 = True
    message = message.lower().strip()
    if message == 'codigo' or message == 'cod' or message == 'c':    
        verifier1 = False
        verifier2 = True
        while verifier2 == True:
            codigo = input('Pesquisa por codigo: ')
            if codigo == '':
                verifier2 = False
                print('Encerrar pesquisa\n\n')
            elif codigo in codeList:
                print('Codigo valido, procurando obra')            
                searchByCod(codigo)
                verifier2 = False
            else:
                print('Codigo nao reconhecido, insira outro codigo')
    
    elif message == 'name' or message == 'nome':
        searchByName(message)

    elif message == 'show' or message == 'show essays':
        showEssays()
    
    elif message == 'cat' or message == 'category' or message == 'categoria':
        category = input('Enter category: ')
        showEssaysByCat(category)
    
    elif message == 'lang' or message == 'language' or message == 'linguagem':
        TempLang = input('Linguagem / Language: ').lower()
        if TempLang == 'pt' or TempLang == 'portugues' or TempLang == 'en' or TempLang == 'english':
            language = TempLang
        else:
            print('Linguagem invalida / Invalid language')
    elif message == '':
        break

    else:
        print('Insira uma instrucao valida.')
    
print('end')

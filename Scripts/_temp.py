import random
essays = list()

codeList = ''

count = 0
language = 'en'
titles = ('Ruthless bears cause storms. Discuss', 'What role do Australian bears play in the food chain', 'Deciding boundaries : Bears eyes and priviledge', 'Is there life on Byss Discuss with reference to eyes', 'Myths and Legends : The role of the humble werewolf in shaping superstition', 'Big Bird : Is there value in analysing the impact of fictional characters on storms', 'What can the patriarchy teach us about werewolf', 'An analysis of brave books', 'The Australian Have a Unique Culture. Discuss', 'An brief history of spiky books', '10 Awesome Ways to Photograph Bears', '7 Pictures of Prince That Wed Rather Forget', 'How to Increase Your Income Using Just Your Eyes.', '21 Myths About Bears Debunked', 'Introducing Anonymous - Who Am I And Why Should You Follow Me', 'Werewolf : Fact versus Fiction', 'Can Bears Dance : An exploration of Memes', 'Bears Are the New Black', '20 Tights Reviews in Tweet Form', 'From Zero to Werewolf - Makeover Tips', 'How to Make Your Own Spiky Tights for less than £5', 'Big Birds 10 Best Moments', 'How to Attract More Spiky Subscribers', 'A Day in the Life of Anonymous', 'Unboxing My New Werewolf Poo', 'The Weeks Top Stories About Prince', '10 Things Youve Always Wanted to Know About the Famous Werewolf', '7 Unmissable YouTube Channels About Books', '10 Things Big Bird Can Teach Us About Books', 'Mistakes That Bears Make and How to Avoid Them')
names = ('Montell Magana', 'Jorgie Mayer', 'Ayaana Callahan', 'Gracie-Leigh Villanueva', 'Sia Ali', 'Beatrice North', 'Wanda Harrington', 'Jenna Pearson', 'Connah Guzman', 'Ellie Iles', 'Anisha Shepard', 'Esmay Hulme', 'Maria Stuart', 'Subhaan Kearns', 'Seth Nolan', 'Montgomery Sargent', 'Bradley Suarez', 'Vikki Daniel', 'Elwood Donovan', 'Antoni Broadhurst', 'Evelyn Key', 'Akeem Preece', 'Filip Larson', 'Bernard Samuels', 'Zeynep Drake', 'Saif Hester', 'Sanjeev Hirst', 'Jodi Crane', 'Lawson Avery', 'Lily-Mae Armitage')

class book:
    def __init__(self, name, author, category, accessN):
        '''Class that creates books, with: An internal code (auto) Name, Author and Category(manual)'''
        self.cod = random.randint(100, 999)
        for essay in essays:
            if self.cod == essay.cod:
                self.cod = random.randint(100, 999)

        self.name = name.lower()
        self.author = author.lower()
        self.cat = category.lower()
        self.accessN = random.randint(0, 100)


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


def createBooks():
    '''A'''
    for i in range(10):
        essays.append(book(titles[i], names[i], 'essays', 10))
    for i in range(10):
        essays.append(book(titles[i+10], names[i+10], 'blog articles', 10))
    for i in range(10):
        essays.append(book(titles[i+20], names[i+20], 'youtubevideos', 10))


def printJson():
    '''Prints all info about the books as in a Json file
    Eq "373":["Myths And Legends : The Role Of The Humble Werewolf In Shaping Superstition", "Sia Ali", "Essays", 10'''
    print('{ \n "books" : {')
    for essay in essays:
        if essay.cod == essays[len(essays)-1].cod:
            msg = '"' + str(essay.cod) + '" : ["' + essay.name + '", "' + essay.author + '", "' + essay.cat + '", ' + str(essay.accessN) + '], '
            print(msg)
        else:
            msg = '"' + str(essay.cod) + '" : ["' + essay.name + '", "' + essay.author + '", "' + essay.cat + '", ' + str(essay.accessN) + '], '
            print(msg)
    print('} \n }')


def createCodeList():
    global codeList
    for essay in essays:
        codeList += str(essay.cod) + ', '


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


createBooks()
createCodeList()
printJson()
from bs4 import BeautifulSoup
import requests
import difflib


Firsturl = "URL1" #playlist 1 url
req = requests.get(Firsturl)
soup = BeautifulSoup(req.content, 'html.parser')
match1= soup.find_all(class_="track-name")  #playlist 1 tune names

Secondurl = "URL2"  #playlist 2 url
req = requests.get(Secondurl)
soup = BeautifulSoup(req.content, 'html.parser')
match2= soup.find_all(class_="track-name") #playlist 2 tune names

lis1=[x.text for x in match1] 
lis2=[x.text for x in match2]
#print(lis1)
#print(lis2)


def Sim(a, b): 
    a_set = set(a) 
    b_set = set(b) 
    if (a_set & b_set): 
        print(a_set & b_set) 

print(Sim(lis1,lis2)) #print Similar songs

sm=difflib.SequenceMatcher(None,lis1,lis2)
print(sm.ratio()*100) # percentage of similarity

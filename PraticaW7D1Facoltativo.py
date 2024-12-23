import random
import string

#creo la funzione che in base alla scelta dell'utente (semplice o difficile) genera una pwd randomica
def genera_pwd(complessita='semplice'):
    #si reichiede all'utente che tipologia di pwd vuole
    complessita= input("Vuoi una password 'semplice' o 'difficile'? ").strip().lower()
    if complessita=='semplice':
        # se viene inserito semplice->alfanumerica di 8 caratteri
        characters = string.ascii_letters + string.digits
        length = 8
    elif complessita=='difficile':
        #difficile->ASCII di 20 caratteri
        characters = string.ascii_letters + string.digits + string.punctuation
        length = 20
    else:
        #se si sbaglia ad inserire la complessità da errore
        raise ValueError("Questa complessità non esiste inserisci o semplice o difficile")

        #genera la password
    password=''.join(random.choices(characters, k=length))
    return password

try:
    password=genera_pwd()
    print("La tua password generata:", password)
except ValueError as e:
    print(e)
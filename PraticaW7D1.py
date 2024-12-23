
#creo una funzione che per output dia una lista di interi rappresentante
# la lunghezza delle parole in input dall'utente (variabile x)

def lunghezza(x):
    y=[len(parola) for parola in x]
    return y

#funzione che prenda in input la stringa
def inserisci_frase():
    input_frase=input("Inserisce la tua frase:")
    lista=input_frase.split()
    return lista

x=inserisci_frase()
y=lunghezza(x)

#stampo a video l'array con la frase e quello con le lunghezze
print("Ecco la tua frase:", x)
print("La lunghezza delle parole è:", y)
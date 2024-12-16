import math
#definisco le funzioni per il calcolo del perimetro e dell'area
def perimetro_quadrato(lato):
    return 4 * lato

def area_quadrato(lato):
    return lato * lato

def perimetro_cerchio(raggio):
    return 2 * math.pi * raggio

def area_cerchio(raggio):
    return math.pi * raggio * raggio

def perimetro_rettangolo(base, altezza):
    return 2 * (base + altezza)

def area_rettangolo(base, altezza):
    return base * altezza

def main():
    figure = ["Quadrato", "Cerchio", "Rettangolo"]
    print("\n--- Perimetro ed area ")

#Il valore iniziale viene immesso dallʼutente solo la prima volta allo start del software
    valore = float(input("Inserisci un valore:"))

    while figure:
        print("\nScegli una figura:")
        for i, figura in enumerate(figure, start=1):
            print(f"{i}. {figura}")
#Creare dunque una selezione multipla di figure da proporre allʼutente ad ogni nuovo calcolo.
        scelta = int(input("Inserisci il numero corrispondente alla figura: "))
#Ogni volta che lʼutente seleziona una figura, questa viene tolta dalle prossime opzioni presentate.
        figura_scelta = figure.pop(scelta - 1)

        if figura_scelta == "Quadrato":
            lato = math.sqrt(valore) 
 # la variabile valore lo si usa come area per derivare il lato
            perimetro = perimetro_quadrato(lato)
            area = area_quadrato(lato)
            print(f"\nFigura: Quadrato\nLato: {lato:.2f}\nPerimetro: {perimetro:.2f}\nArea: {area:.2f}")

        elif figura_scelta == "Cerchio":
            raggio = math.sqrt(valore / math.pi) 
 # la variabile valore lo si usa come area per derivare il raggio
            perimetro = perimetro_cerchio(raggio)
            area = area_cerchio(raggio)
            print(f"\nFigura: Cerchio\nRaggio: {raggio:.2f}\nPerimetro: {perimetro:.2f}\nArea: {area:.2f}")

        elif figura_scelta == "Rettangolo":
            base = valore / 2 
            altezza = valore / base
            perimetro = perimetro_rettangolo(base, altezza)
            area = area_rettangolo(base, altezza)
            print(f"\nFigura: Rettangolo\nBase: {base:.2f}\nAltezza: {altezza:.2f}\nPerimetro: {perimetro:.2f}\nArea: {area:.2f}")

        #bisogna aggironarne il valore per il calcolo successivo
        valore = area

    print("\nFine")

if __name__ == "__main__":
    main()

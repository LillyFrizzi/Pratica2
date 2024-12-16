import math
#creo le funzioni per il calcolo delle aree di ogni singola forma geometrica
def area_quadrato():
    lato=5  
    return lato*lato

def area_cerchio():
    raggio=3 
    return math.pi*raggio*raggio

def area_rettangolo():
    base=6  
    altezza=4  
    return base*altezza


def main():
    print("\nCalcolo delle aree delle figure geometriche")
    area_quad=area_quadrato()
    area_cer=area_cerchio()
    area_rett=area_rettangolo()
#stampo i valori
    print(f"Area del quadrato {area_quad:.2f}")
    print(f"Area del cerchio {area_cer:.2f}")
    print(f"Aarea del rettangolo {area_rett:.2f}")

if __name__ == "__main__":
    main()

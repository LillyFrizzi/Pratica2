//Il gioco dovrà funzionare in modo tale da:
//- Presentare una rapida introduzione allʼutente con lo scopo del programma
//- Mostrare allʼutente un menu di scelta iniziale tra: A Iniziare una nuova partita; B Uscire dal gioco
//- Ricevere in input la scelta dellʼutente
//- Creare o meno una nuova partita in base allʼinput utente
//- Ricevere in input nome dellʼutente in caso di nuova partita
//- Presentare un set di domande allʼutente a risposta multipla (almeno 3 risposte a domanda)
//- Valutare la risposta utente per ogni domanda ed aggiornare una variabile «punteggio in caso di risposta esatta»
//- Scrivere a schermo a fine partita il punteggio totalizzato dal giocatore corrente

#include <stdio.h>
#include <string.h>

//Intro al gioco 

void introduzione(){
      printf("        Ciao qui il Quiz a Risposte multiple in cui lo scopo è rispondere correttamente alle domande per ottenere il maggior punteggio   \n");
    printf("=========================================================================================================================================\n\n");

}

// Scelta iniziale se proseguire con il gioco o mollare tutto

// //- Ricevere in input la scelta dellʼutente
char menu() {
    char scelta;
    printf("Vuoi giocare?\n");
    printf("A. Inizia una nuova partita\n");
    printf("B. Esci dal gioco\n");
    printf("Cosa scegli? (A/B): ");
    scanf(" %c", &scelta);
    return scelta;
}

// si inizia la partita

// //- Creare o meno una nuova partita in base allʼinput utente
// //- Ricevere in input nome dellʼutente in caso di nuova partita
void nuovaPartita() {
    char nome[50]; //nome utente
    int punteggio = 0; // punteggio utente
    int risposta;      // risposte utente

    printf("\nInserisci il tuo nome: ");
    scanf("%s", nome);

    printf("\nCiao %s! Vai con il quiz! In bocca al lupo\n\n", nome);
    // ogni risposta corretta fa guadagnare all'utente 10 punti, in caso contrario 0

    // //- Presentare un set di domande allʼutente a risposta multipla (almeno 3 risposte a domanda)
    // //- Valutare la risposta utente per ogni domanda ed aggiornare una variabile «punteggio in caso di risposta esatta»

    // prima domanda
    printf("1. Qual è la capitale della Francia?\n");
    printf("   1. Berlino\n");
    printf("   2. Madrid\n");
    printf("   3. Parigi\n");
    printf("Risposta: ");
    scanf("%d", &risposta);
    if (risposta == 3) {
        printf("Risposta corretta!\n");
        punteggio += 10;
    } else {
        printf("Risposta errata era la 3.\n");
    }
    printf("\n");

    // seconda domanda
    printf("2. Quanto fa 5 * 6?\n");
    printf("   1. 30\n");
    printf("   2. 25\n");
    printf("   3. 35\n");
    printf("Risposta: ");
    scanf("%d", &risposta);
    if (risposta == 1) {
        printf("Risposta corretta!\n");
        punteggio += 10;
    } else {
        printf("Risposta errata era la 1.\n");
    }
    printf("\n");

    // terza domanda
    printf("3. Chi ha scritto \"La Divina Commedia\"?\n");
    printf("   1. Petrarca\n");
    printf("   2. Dante Alighieri\n");
    printf("   3. Manzoni\n");
    printf("Risposta: ");
    scanf("%d", &risposta);
    if (risposta == 2) {
        printf("Risposta corretta!\n");
        punteggio += 10;
    } else {
        printf("Risposta errata era la 2.\n");
    }
    printf("\n");

    // //- Scrivere a schermo a fine partita il punteggio totalizzato dal giocatore corrente

    printf("===========================================\n");
    printf("%s, hai totalizzato %d punti!\n", nome, punteggio);
    printf("===========================================\n");
}

int main() {
    char scelta;

    // //- Presentare una rapida introduzione allʼutente con lo scopo del programma
    introduzione();

    // //- Mostrare allʼutente un menu di scelta iniziale tra: A Iniziare una nuova partita; B Uscire dal gioco
    scelta = menu();

    // Gestione della scelta dell'utente
    if (scelta == 'A') {
        nuovaPartita();
    } else if (scelta == 'B') {
        printf("\nUff buonagiornata!\n");
    } else {
        printf("\nScelta non valida.\n");
    }

    return 0;
}
# Sistemi-Embedded--Sistema-di-Controllo-Cancello-Elettrico
# Sistema di Controllo Cancello Elettrico a Battente

## Informazioni Generali
**Università degli Studi di Salerno**  
Dipartimento di Ingegneria dell’Informazione ed Elettrica e Matematica Applicata  
Corso di Laurea Magistrale in Ingegneria Informatica  

**Corso:** Sistemi Embedded (Canale I-Z)  
**Anno Accademico:** 2023-2024  
---

## Progettazione del Sistema

1. Apertura cancello da stato chiuso o in chiusura (LED giallo lampeggiante 0.5 Hz)  
2. Chiusura cancello da stato aperto o in apertura  
3. Configurazione tempo chiusura automatica (10–120s)  
4. Configurazione tempo di lavoro (10–120s)  
5. Riapertura automatica in presenza di ostacolo durante chiusura  
6. Comandi ignorati con ostacolo presente (LED verde lampeggiante 1 Hz per 30s)  
7. Stato di errore se il cancello non si chiude entro il tempo previsto  
8. LED errore acceso dopo 10s in stato di errore  
9. Cancello aperto → tutti i LED accesi  
10. Cancello chiuso → tutti i LED spenti  
11. All’accensione, chiusura automatica se necessario  
12. Cancello considerato chiuso solo con sensore attivo  

---

### Use Case

#### Accensione
- Verifica sensore di chiusura  
- Se non attivo → chiusura automatica  

#### Funzionamento
- Pulsante unico per apertura/chiusura  
- Chiusura automatica dopo timeout  
- LED:
  - Aperto → tutti accesi  
  - Chiuso → tutti spenti  
  - Movimento → giallo lampeggiante  

#### Presenza Ostacoli
- In chiusura → riapertura automatica  
- Comandi ignorati con ostacolo  
- LED verde lampeggiante  

####  Verifica Chiusura
- Se P2 non attivo → errore  
- LED rosso acceso dopo 10s  

---

### Activity Diagrams
- Apertura/chiusura  
- Rilevamento ostacoli  
- Configurazione tempi di operazione del cancello
- Accensione sistema  
- Verifica chiusura  

---

### State Diagram
Stati principali:
- `Check`
- `Close`
- `Open`
- `Update`
- `Obstacle`
- `Error`

---
## Hardware

### Componenti
- Pulsanti: B1, B2, B3  
- Sensori: P1, P2  
- LED: L1, L2, L3  

### Pin

| Componente | Pin |
|-----------|-----|
| B1 | PC_8 |
| B2 | PC_10 |
| B3 | PC_13 |
| P1 | PC_6 |
| P2 | PC_5 |
| L1 | PB_5 |
| L2 | PB_4 |
| L3 | PB_3 |

---

## Validazione

### Test LED
- Accensione/spegnimento  
- Lampeggio corretto  

### Test Cancello
- Apertura/chiusura  
- Chiusura automatica  
- Configurazione tempi  

### Test Ostacoli
- Ostacolo a cancello fermo  
- Ostacolo in movimento  

---


## Team

| Cognome | Nome |
|-------------|----------|------|
| Lettieri | Alessia |
| Napolitano | Domenico |
| Panico | Marco | 
| Passanante | Alessandro | 


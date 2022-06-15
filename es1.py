#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Nene @ 2022-06-15
#Scrivi una funzione che prende due numeri come parametro e manda in print il più grande tra i due.
#Per quanto Python disponga di una funzione max(), sei invitato a utilizzare le istruzioni If, Elif ed Else per la scrittura dell'algoritmo.

def massimo(a , b):
    if a>b:
        print(a + " è maggiore di " + b)
    elif b>a:
        print(b +  " è maggiore di " + a)
    else:
        print("I due numeri sono uguali")


numero1 = input("Inerisci un numero: ")
numero2 = input("Inerisci un numero: ")

massimo(numero1, numero2)

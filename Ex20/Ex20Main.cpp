/*Faça um algoritmo que receba um numero inteiro positivo  n e calcule o seu fatorial, n!.*/


#include <iostream>
#include "Ex20.h"

using namespace std;



int main(){
    int val;
    cout << "Digite um valor para ser calculado seu fatorial: " << endl;
    cin >> val;
    cout << fatorial(val);

}
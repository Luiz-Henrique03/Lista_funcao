/*Faça uma função que recebe, por parâmetro, uma matriz A[7][6] e uma coluna N e retorne 
a soma dos elementos dessa coluna.*/

#include <iostream>
#include "Ex57.h"

using namespace std;



int main(){
    int mat[7][6] = {{4,5,6,7,8,9},{1,3,3,10,9,7},{1,2,8,1,4,5},{1,5,7,8,4,5},{6,5,7,8,9,2},{4,7,8,9,1,2},{3,4,7,8,1,2}};
    cout << SomaColuna(mat,3);
}
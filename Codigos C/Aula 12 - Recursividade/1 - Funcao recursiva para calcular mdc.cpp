// Funcao recursiva para calcular o maximo divisor comum (MDC)
int mdc(int x, int y) {
    if (y == 0)
        return x;           // Caso base: quando y for 0, retorna x
    else
        return mdc(y, x % y);  // Chamada recursiva com os novos parametros
}



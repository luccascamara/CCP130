// Funcao recursiva que retorna a soma dos n primeiros elementos do vetor v
int soma(int n, int v[]) {
    if (n == 0)
        return 0;                         // Caso base: vetor vazio retorna soma 0
    else
        return v[n - 1] + soma(n - 1, v); // Soma o ultimo elemento com a soma do restante
}


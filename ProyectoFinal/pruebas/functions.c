int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplica(int x, int y) {
    return x * y;
}

int main() {
    int resultado1;
    int resultado2;
    int resultado3;

    resultado1 = suma(5, 3);
    resultado2 = resta(10, 4);
    resultado3 = multiplica(resultado1, resultado2);

    return resultado3;
}
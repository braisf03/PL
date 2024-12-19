int main() {
    int x = 5;
    int y = 10;
    int z;

    // Este es un comentario de una línea
    z = x + y;

    if (z > 10) {
        z = z - 5;
    } else {
        z = z + 5;
    }

    /* Este es un comentario
       de múltiples líneas */
    for (int i = 0; i < 5; i++) {
        x++;
        y--;
    }

    while (x < 20) {
        x += 2;
    }

    return 0;
}
/************************************/
/*      Daniel Carrasco Luque       */
/*           Producto 1             */
/*                                  */
/*        Verificar letra DNI       */
/************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char calcularLetra(int dni);

int main(void) {

	char dniCompleto[10];
	char stringDni[9];
	char letraIn;
	char letraCalculada;
	int dni;
	int control = 0;
	int c;
	int i;

	while (!control) {
		printf("Introduce numeros y letra del DNI: ");
		scanf_s("%9s", dniCompleto, (unsigned)_countof(dniCompleto));

		// Borramos buffer teclado para evitar excesos de pulsaciones
		while ((c = getchar()) != '\n' && c != EOF);

		// controlar longitud
		if (strlen(dniCompleto) != 9) {
			printf("DNI incompleto.\n");
			continue;
		}

		// Control de los primeros 8 números
		for (i = 0; i < 8; i++) {
			if (!isdigit(dniCompleto[i])) {
				printf("Los primeros 8 digitos deben ser numeros.\n");
				break;
			}
		}
		// Hay un error, reiniciamos el bucle
		if (i < 8) continue;

		// Control del caracter final
		if (!isalpha(dniCompleto[8])) {
			printf("El ultimo caracter debe ser una letra.\n");
			continue;
		}

		// Si se han superado los controles salimos del bucle
		control = 1;
	}


	// Separamos el string inicial en un string numerico y la letra en otra variable
	strncpy_s(stringDni, sizeof(stringDni), dniCompleto, 8);
	stringDni[8] = '\0';
	letraIn = dniCompleto[8];
	letraIn = toupper(letraIn);

	// Pasamos de String a int
	dni = atoi(stringDni);
	letraCalculada = calcularLetra(dni);
	letraCalculada = toupper(letraCalculada);

	if (letraCalculada == letraIn) {
		printf("Letra correcta\n\n");
	}
	else {
		printf("Letra incorrecta. La letra deberia ser: %c\n\n", letraCalculada);
	}

	return 0;
}

char calcularLetra(int dni) {
	const char* letras = "TRWAGMYFPDXBNJZSQVHLCKE";
	dni = dni % 23;
	return letras[dni];
}
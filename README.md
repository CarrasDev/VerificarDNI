🆔 VerificarDNI
Autor: Daniel Carrasco Luque Descripción: Este programa en C permite verificar si la letra asociada a un número de DNI español es correcta. Realiza validaciones de entrada, calcula la letra correspondiente y compara con la introducida por el usuario.

📦 Contenido del proyecto
verificaDNI.c: Código fuente principal del programa

VerificarDNI.sln, .vcxproj, .vcxproj.filters: Archivos de configuración del proyecto para Visual Studio

README.md: Este documento

🚀 Cómo funciona
Solicita al usuario un DNI completo (8 números + 1 letra).

Valida que:

Los primeros 8 caracteres sean dígitos.

El último carácter sea una letra.

La longitud total sea 9 caracteres.

Calcula la letra correcta usando el algoritmo oficial de la DGT.

Compara la letra introducida con la calculada.

Informa si la letra es correcta o incorrecta.

🧮 Algoritmo de cálculo de letra
La letra del DNI se calcula con la fórmula:

dni % 23
Y se busca en la cadena:

"TRWAGMYFPDXBNJZSQVHLCKE"
Por ejemplo, si el número es 12345678, se hace 12345678 % 23 = 14, y la letra correspondiente es 'Z'.

🖥️ Requisitos
Compilador C compatible (Visual Studio, GCC, Clang, etc.)

Sistema operativo: Windows

Para compilar en Visual Studio, se incluyen los archivos del proyecto

⚠️ Compatibilidad del código
Este programa está diseñado originalmente para entornos Windows utilizando Visual Studio, por lo que incluye funciones como scanf_s, strncpy_s y _countof, que no son compatibles directamente con compiladores estándar en macOS o Linux.

Si deseas ejecutar este programa en sistemas Unix-like, es necesario adaptar el código utilizando funciones estándar como scanf, strncpy, y evitar macros específicas de Microsoft.

🧪 Ejemplo de uso
Introduce numeros y letra del DNI: 12345678Z
Letra correcta
Introduce numeros y letra del DNI: 12345678A
Letra incorrecta. La letra deberia ser: Z
📌 Notas técnicas
Se usa scanf_s y strncpy_s para mayor seguridad en entornos Windows.

Se limpia el buffer del teclado para evitar errores de entrada.

La letra se convierte a mayúscula para evitar errores por minúsculas.

📄 Licencia
Este proyecto se publica bajo la licencia MIT. Puedes usarlo, modificarlo y distribuirlo libremente.

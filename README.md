## 🆔 VerificarDNI

- Autor: Daniel Carrasco Luque
- Lenguaje: C
- Licencia: MIT

## 📖 Descripción

VerificarDNI es un programa en C que permite verificar si la letra asociada a un número de DNI español es correcta. Realiza validaciones de entrada, calcula la letra según el algoritmo oficial y compara con la introducida por el usuario.

## 📦 Estructura del proyecto

- verificaDNI.c: Código fuente principal del programa.
- VerificarDNI.sln, .vcxproj, .vcxproj.filters: Archivos de configuración para Visual Studio.
- README.md: Este documento.

## 🚀 Funcionamiento

- Solicita al usuario un DNI completo (8 números + 1 letra).
- Valida que:
- Los primeros 8 caracteres sean dígitos.
- El último carácter sea una letra.
- La longitud total sea de 9 caracteres.
- Calcula la letra correcta usando el algoritmo oficial.
- Compara la letra introducida con la calculada.
- Informa si la letra es correcta o incorrecta.

## 🧮 Algoritmo de cálculo

La letra del DNI se obtiene mediante la fórmula:
letra = "TRWAGMYFPDXBNJZSQVHLCKE"[dni % 23];

Ejemplo:

Para el número 12345678, se calcula 12345678 % 23 = 14, y la letra correspondiente es 'Z'.

## 🖥️ Requisitos

- Compilador C compatible: Visual Studio, GCC, Clang, etc.
- Sistema operativo: Windows (por defecto).
- Archivos de proyecto incluidos para compilación en Visual Studio.

## ⚠️ Compatibilidad

Este programa está diseñado para entornos Windows y utiliza funciones específicas como scanf_s, strncpy_s y _countof, que no son compatibles directamente con compiladores estándar en macOS o Linux.
Para sistemas Unix-like, se recomienda adaptar el código usando:
- scanf en lugar de scanf_s
- strncpy en lugar de strncpy_s
- Evitar macros específicas de Microsoft

## 🧪 Ejemplo de uso

Introduce números y letra del DNI: 12345678Z
Letra correcta

Introduce números y letra del DNI: 12345678A
Letra incorrecta. La letra debería ser: Z



## 📌 Notas técnicas

- Se utiliza scanf_s y strncpy_s para mayor seguridad en entornos Windows.
- Se limpia el buffer del teclado para evitar errores de entrada.
- La letra se convierte a mayúscula para evitar errores por minúsculas.

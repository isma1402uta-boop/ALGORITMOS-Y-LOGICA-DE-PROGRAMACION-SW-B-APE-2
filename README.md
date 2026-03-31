# 📂 ALGORITMOS Y LÓGICA DE PROGRAMACIÓN (SW-B-APE-2)

Este repositorio contiene la resolución técnica de la **Guía Práctica APE-2**, desarrollada como parte de la formación en la carrera de **Ingeniería de Software** de la Universidad Técnica de Ambato (UTA).

---

## 🚀 Introducción
El proyecto se enfoca en la transición del diseño algorítmico básico hacia la **Programación Orientada a Objetos (POO)** utilizando C++. Se exploran conceptos clave como la manipulación de estados, validación de datos y el uso de estructuras de selección para resolver problemas de la vida real.



---

## 🎯 Objetivos Específicos
* **Estructuras de Control:** Implementar menús interactivos con `switch` y validaciones lógicas con `if-else`.
* **Modularidad (POO):** Modelar entidades mediante clases, encapsulando atributos y definiendo métodos de comportamiento.
* **Integridad de Datos:** Garantizar que las variables (como saldos o niveles de humedad) se mantengan dentro de rangos lógicos.

---

## 💻 Ejercicios Desarrollados

### 1. Control de Hora 🕒
* **Descripción:** Sistema que permite registrar y actualizar el tiempo.
* **Lógica:** Utiliza estructuras de decisión para confirmar si el usuario desea sobrescribir los datos ingresados.

### 2. Sistema de Cuentas Bancarias 🏦
* **Descripción:** Simulación de un entorno bancario multi-cuenta.
* **Funcionalidades:** * Registro por DNI.
    * Transferencias entre cuentas.
    * Validación de saldo suficiente antes de cada transacción.

### 3. Gestión de Jean (POO) 👖
* **Descripción:** Clase avanzada que simula el estado de una prenda en fábrica.
* **Comportamiento:** * `lavar()`: Disminuye el tinte y aumenta la humedad al 100%.
    * `secar()`: Reduce la humedad de forma progresiva hasta llegar a 0%.

---

## 📊 Resultados y Pruebas
| Actividad | Entrada de Prueba | Resultado Esperado | Estado |
| :--- | :--- | :--- | :--- |
| **Bancario** | Transferir $50 (Saldo $20) | Error: Saldo Insuficiente | ✅ |
| **Clase Jean** | Llamar a `lavar()` | Tinte -1, Humedad 100% | ✅ |
| **Control Hora** | Opción 'n' (No cambiar) | Finalización del programa | ✅ |

---

## 📑 Conclusiones y Recomendaciones

### Conclusiones
* La **Programación Orientada a Objetos** permite un código más limpio y escalable que el modelo puramente secuencial.
* El uso de **GitHub** facilita la organización de evidencias académicas y el control de versiones del software.

### Recomendaciones
* Se sugiere implementar la clase `Jean` en archivos separados (`.h` y `.cpp`) para mejorar la modularidad del proyecto.
* Es recomendable usar nombres de variables descriptivos para facilitar el mantenimiento del código a

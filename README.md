# Proyecto Android con C++ y NDK

Este proyecto es una plantilla básica para el desarrollo de aplicaciones Android utilizando C++ a través del Android NDK.

## Estructura del Proyecto

```
. 
├── app/
│   ├── build.gradle
│   ├── src/
│   │   ├── main/
│   │   │   ├── AndroidManifest.xml
│   │   │   ├── cpp/
│   │   │   │   ├── CMakeLists.txt
│   │   │   │   └── native-lib.cpp
│   │   │   ├── java/
│   │   │   │   └── com/
│   │   │   │       └── example/
│   │   │   │           └── myapplication/
│   │   │   │               └── MainActivity.java
│   │   │   └── res/
│   │   │       ├── layout/
│   │   │       │   └── activity_main.xml
│   │   │       └── values/
│   │   │           └── strings.xml
├── build.gradle
├── settings.gradle
└── README.md
```

## Requisitos Previos

Antes de compilar y ejecutar este proyecto, asegúrate de tener instalado lo siguiente:

*   **Android Studio**: Incluye el SDK de Android y las herramientas de línea de comandos.
*   **Android NDK**: Se puede instalar a través del SDK Manager en Android Studio.
*   **CMake**: También se puede instalar a través del SDK Manager en Android Studio.
*   **Gradle**: Generalmente viene incluido con Android Studio.

## Compilación y Ejecución

Para compilar y ejecutar este proyecto, sigue estos pasos:

1.  **Abrir en Android Studio**: Abre el proyecto en Android Studio. Android Studio debería detectar automáticamente la configuración de Gradle y NDK.

2.  **Sincronizar Proyecto**: Una vez abierto, Android Studio te pedirá que sincronices el proyecto con los archivos de Gradle. Acepta para descargar las dependencias necesarias.

3.  **Construir el Proyecto**: Ve a `Build > Make Project` en el menú de Android Studio, o usa el atajo de teclado `Ctrl + F9` (Windows/Linux) / `Cmd + F9` (macOS).

4.  **Ejecutar en un Dispositivo/Emulador**: Conecta un dispositivo Android a tu computadora o inicia un emulador de Android. Luego, haz clic en el botón `Run` (el ícono de triángulo verde) en la barra de herramientas de Android Studio, o usa el atajo de teclado `Shift + F10` (Windows/Linux) / `Ctrl + R` (macOS).

    La aplicación se instalará y ejecutará en el dispositivo/emulador. Deberías ver un mensaje que dice "Hola Mundo desde C++!" en la pantalla.

## Código de Ejemplo

El proyecto incluye un ejemplo simple de "Hola Mundo" implementado en C++ y expuesto a Java a través de JNI:

*   `app/src/main/cpp/native-lib.cpp`: Contiene la función `stringFromJNI` que devuelve la cadena "Hola Mundo desde C++!".
*   `app/src/main/java/com/example/myapplication/MainActivity.java`: Carga la librería nativa y llama a `stringFromJNI` para mostrar el texto en un `TextView`.

## Compatibilidad con Android NDK

Este proyecto está configurado para usar el Android NDK. La configuración se encuentra en `app/build.gradle` y `app/src/main/cpp/CMakeLists.txt`.

*   `app/build.gradle`: Define la ruta a `CMakeLists.txt` y la versión de CMake.
*   `app/src/main/cpp/CMakeLists.txt`: Especifica cómo se construye la librería nativa (`native-lib`) a partir de `native-lib.cpp` y cómo se vincula con la librería `log` del NDK.

## Expansión Futura

Para expandir este proyecto:

*   **Añadir más código C++**: Crea nuevos archivos `.cpp` en `app/src/main/cpp` y añádelos a `CMakeLists.txt`.
*   **Exponer funciones C++ a Java**: Define nuevas funciones `JNIEXPORT` en tus archivos C++ y declara sus métodos `native` correspondientes en tus clases Java.
*   **Añadir más módulos**: Si tu aplicación crece, puedes añadir más módulos de Android al proyecto y configurarlos en `settings.gradle`.

Este proyecto sigue las mejores prácticas para el desarrollo de Android con C++ al utilizar Gradle para la gestión de la compilación y CMake para la configuración del NDK, lo que facilita la integración y el mantenimiento del código nativo.

# JonaaaDev: Proyecto Android con C++ y Ventana Flotante

## Descripción del Proyecto

Este proyecto es una aplicación de ejemplo para Android que demuestra la integración de código C++ a través del Android NDK y la implementación de una ventana flotante (`SYSTEM_ALERT_WINDOW`). Sirve como una plantilla básica para desarrolladores que buscan combinar el rendimiento de C++ con la flexibilidad de Java/Kotlin en aplicaciones Android, además de explorar funcionalidades avanzadas de UI como las ventanas superpuestas.

## Funcionalidades Implementadas

*   **Integración C++ con JNI**: Demuestra cómo llamar funciones C++ desde Java y viceversa utilizando la Interfaz Nativa de Java (JNI).
*   **Ventana Flotante**: Implementa un servicio que crea y gestiona una ventana flotante persistente sobre otras aplicaciones, útil para herramientas de monitoreo, superposiciones de juego o utilidades de acceso rápido.

## Requisitos del Sistema

Para desarrollar y compilar este proyecto, necesitarás:

*   **Sistema Operativo**: Windows, macOS o Linux.
*   **Memoria RAM**: 8 GB o más (recomendado).
*   **Espacio en Disco**: 10 GB de espacio libre para Android Studio, SDK, NDK y proyectos.

## Requisitos Previos de Software

Asegúrate de tener instalado lo siguiente:

*   **Android Studio**: Versión 2022.2.1 (Flamingo) o superior. Incluye el SDK de Android y las herramientas de línea de comandos.
*   **Java Development Kit (JDK)**: Versión 17 o superior. Android Studio generalmente instala su propia versión de OpenJDK.
*   **Android NDK**: Se puede instalar a través del SDK Manager en Android Studio.
*   **CMake**: También se puede instalar a través del SDK Manager en Android Studio.
*   **Gradle**: Generalmente viene incluido con Android Studio.

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
│   │   │   │       └── jonaaadev/
│   │   │   │           └── mo/
│   │   │   │               ├── MainActivity.java
│   │   │   │               └── service/
│   │   │   │                   └── FloatingWindowService.java
│   │   │   └── res/
│   │   │       ├── layout/
│   │   │       │   ├── activity_main.xml
│   │   │       │   └── layout_floating_window.xml
│   │   │       └── values/
│   │   │           └── strings.xml
├── build.gradle
├── settings.gradle
└── README.md
```

## Instalación y Configuración

1.  **Clonar el Repositorio**:

    ```bash
    git clone https://github.com/JonaaaDev/Proyecto-GameDev.git
    cd Proyecto-GameDev
    ```

2.  **Abrir en Android Studio**:

    Abre el proyecto clonado en Android Studio. Android Studio debería detectar automáticamente la configuración de Gradle y NDK.

3.  **Sincronizar Proyecto**:

    Una vez abierto, Android Studio te pedirá que sincronices el proyecto con los archivos de Gradle. Acepta para descargar todas las dependencias necesarias.

4.  **Permiso de Ventana Flotante**:

    Para que la ventana flotante funcione correctamente en Android 6.0 (API 23) y versiones posteriores, la aplicación requiere el permiso `SYSTEM_ALERT_WINDOW`. Este permiso debe ser concedido manualmente por el usuario en la configuración del dispositivo. La aplicación intentará solicitar este permiso al iniciar `MainActivity`.

    Asegúrate de que la aplicación tenga este permiso habilitado en `Configuración > Aplicaciones > [Tu Aplicación] > Permisos especiales > Mostrar sobre otras aplicaciones`.

## Guía de Uso

1.  **Compilar y Ejecutar**:

    *   Conecta un dispositivo Android a tu computadora o inicia un emulador de Android.
    *   Haz clic en el botón `Run` (el ícono de triángulo verde) en la barra de herramientas de Android Studio, o usa el atajo de teclado `Shift + F10` (Windows/Linux) / `Ctrl + R` (macOS).

2.  **Interacción con la Aplicación**:

    *   La `MainActivity` mostrará un mensaje de "Hola Mundo desde C++!" demostrando la integración con NDK.
    *   Desde la `MainActivity`, podrás iniciar el `FloatingWindowService` que creará la ventana flotante.
    *   La ventana flotante (`layout_floating_window.xml`) es interactiva y se puede mover por la pantalla.

## Contribución

Las contribuciones son bienvenidas. Si deseas contribuir, por favor, sigue estos pasos:

1.  Haz un fork del repositorio.
2.  Crea una nueva rama (`git checkout -b feature/nueva-funcionalidad`).
3.  Realiza tus cambios y commitea (`git commit -am 'feat: Añadir nueva funcionalidad'`).
4.  Sube tus cambios a tu fork (`git push origin feature/nueva-funcionalidad`).
5.  Abre un Pull Request detallando tus cambios.

## Licencia

Este proyecto está bajo la licencia MIT. Consulta el archivo `LICENSE` para más detalles.
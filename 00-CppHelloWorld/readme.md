- Utilizo el compilador MinGW-w64 disponible para descargar en la diap�sitiva de la clase del 4/4.
- Escribo el c�digo con Scribd y lo guardo como "hello.cpp" (Se puede ver el c�digo en el archivo adjunto).
- Luego de haber instalado el compilador MinGW-w64, voy a Sistema/Configuraci�n avanzada del sistema/Variables de entorno/Path
- En esta instancia genero un nuevo camino que apunte al archivo "bin" correspondiente a el compilador.
- Entro a cmd:

C:\...\..>g++ hello.cpp
				// Se compila el archivo y se crea un ejecutable "a.exe"

C:\...\..>a.exe > a.exe > output.txt

				// Se abre un archivo de texto con "output.txt" donde se encuentra escrito "Hello World!"
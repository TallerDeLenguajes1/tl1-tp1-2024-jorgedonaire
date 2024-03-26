#Respuestas

**¿Porque es conveniente incluirlo? ¿Cuándo se debe hacer? ¿Cómo configuraría el archivo .gitignore?**
Incluir un archivo .gitignore es una práctica recomendada para mantener tu repositorio limpio, evitar problemas de fusión y mejorar la seguridad al excluir archivos sensibles.
El archivo .gitignore generalmente se coloca en el directorio raiz del proyecto. Para crear un archivo
.gitignore loca, se crea un archio de texto con el nombre ".gitignore". Luego se edita segun sea necesario.
Cada nueva linea debe incluir un archivo o carpeta adicional que quiera que Git ignore.

Las entradas de este archivo también pueden seguir un patrón coincidente:

- * se utiliza como una coincidencia comodin 
- / se usa para ignorar las rutas relativas al archivo .gitignore
- # es usado para agregar comentarios
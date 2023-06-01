def to_upper(archivo):
    archivo_yml = open(f'C:\\Users\\Lucas\\OneDrive\\Escritorio\\Universidad Unlam\\UNLaM\\Prueba\\{archivo}', "r+")
    formacion = archivo_yml.readlines()
    archivo_yml.close()
    formacion_upper = []
    for text in formacion:
        text = f'{text[2:len(text)].upper().strip()}'
        formacion_upper.append(f'{text}\n')
    write_lines(archivo, formacion_upper )

def num(archivo, archivo2):
    archivo_yml = open(f'C:\\Users\\Lucas\\OneDrive\\Escritorio\\Universidad Unlam\\UNLaM\\Prueba\\{archivo}', "r+")
    formacion = archivo_yml.readlines()
    formacion_upper = []
    archivo_yml.close()
    for text in formacion:
        text = f'{text[0:2].upper().strip()}'
        formacion_upper.append(f'{text}\n')
    print(formacion_upper)
    write_lines(archivo2, formacion_upper )

def write_lines(archivo, formacion):
    archivo_yml = open(f'C:\\Users\\Lucas\\OneDrive\\Escritorio\\Universidad Unlam\\UNLaM\\Prueba\\{archivo}', "r+")
    archivo_yml.truncate(0)
    archivo_yml.seek(0)
    archivo_yml.writelines(formacion)
    archivo_yml.close()

num('a.txt','num.txt')
to_upper('a.txt')


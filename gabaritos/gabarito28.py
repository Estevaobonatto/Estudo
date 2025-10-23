import re

def validar_email(email):
    pattern = r'^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$'
    return re.match(pattern, email) is not None

email = input("Digite um email: ")
if validar_email(email):
    print("Email válido")
else:
    print("Email inválido")
#salário com bônus
nome = input("")
salario = float(input(""))
montante = float(input(""))
salario_final = salario + (montante * 0.15)

print(f'TOTAL = {"{:.2f}".format(salario_final)}')
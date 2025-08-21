pi = 3.14159
raio = float(input(""))
area = (raio ** 2) * pi 
#":.2f".format(num) => essa função formata um float em casas decimais determinadas e devolve em string
print(f'A={"{:.4f}".format(area)}')

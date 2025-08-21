A = float(input(""))
B = float(input(""))

"""
pesoA = (A * 0.35)  
pesoB = (B * 0.75) 

t = pesoA + pesoB 
t = t / 11
t =  t - 0.1
t *= 10
t += 1
"""
A = A * 3.5
B = B * 7.5
media_final = (A + B) / 11

print(f'MEDIA = {"{:.5f}".format(media_final)}')
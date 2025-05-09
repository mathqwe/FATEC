#typecasting = converting a variable from one data type to another
# str(), int(), float(), bool()

name = "Math"
age  = 20
weight = 68.5
is_student = True

print(type(age), type(name), type(weight), type(is_student))

print(f"\n\n\nYour float date weight is = {weight}")
print(f"\n\n\nconverting to int with int() = {int(weight)}\n\n\n")

age = float(age)
print(age)

true = 1
false = 0

true = bool(true)
false = bool(false)
print(true, false, type(true), type(false))

print(type(str(age)))
#3.	Faça um programa que leia e valide as seguintes informações:
  #a.	Nome: maior que 3 caracteres [procure sobre a função len()];
  #b.	Idade: entre 0 e 150;
  #c.	Salário: maior que zero;
  #d.	Sexo: 'f' ou 'm';
  #e.	Estado Civil: 's', 'c', 'v', 'd';



print('Hi, there. Welcome to your validation personal system. Please, share the following information with us: ')
name=str(input("What's your name? "))
while ( len(name) <=  3 ):
  print("Invalid Information.")
  name=str(input("What's you name? "))
else:
  print("Validation Check! Welcome to your validation system - please complete the following information bellow: ")
  

print('Now we need to know your age.')
age=int(input("What's your age? "))
if (age > 0 and age < 150):
  print("Validation Check!")
else:
  print("Invalid Information!")
  age=int(input("What's you age? "))
print('----------------------------------------------------------------------------------------------------------')
print('----------------------------------------------------------------------------------------------------------')
print('-------------------------------------------- Loading.... -------------------------------------------------')
print('----------------------------------------------------------------------------------------------------------')
print('----------------------------------------------------------------------------------------------------------')
print("Time to inform us your salary, but don't worry this is a confindential information!")
salary=float(input("What's you salary? "))
if (salary > 0):
  print("The information proceed")
else:
  print('Invalid information! Please, try again')
  salary=float(input("What's you salary? "))

print('All right! We are just finishing. Just two more questions')
print('About the gender you identify with: ')
gender=bool(input('Male[ ] Female[ ]'))
print(gender)

print('Ok, now we need to know your marital status')
mylist = ["( )Single", "( )Married", "( )Divorced", "( )Widower"]
print(mylist)
status=str(input("What's you marital status? "))

print('Well done! Thanks for all the information - please, fell free to login in')
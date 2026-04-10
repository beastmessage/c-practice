x = int(input('enter the first number: '))
y = int(input('Enter the 2nd number: '))
z = None
c = input('Enter the operation: ')
if c == '+':
  print(f'the sum is {x + y}')
elif c == '-':
  print(f'the sub is {x - y}')
elif c == '*':
  print(f'the multiplication is {x * y}')
elif c == '/':
  print(f'the division is {x / y}')
else:
  print('unexpected operation')
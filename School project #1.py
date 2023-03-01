
# Ryan Burke
# My program will display the net worth of investment over time
# 2/1/2023


rate = float(input('Enter the interest rate:% '))
print()

deposit = float(input('Enter deposit amount:$ '))
print()

time = int(input('How many months will you hold your savings: '))
print()

interest = float(deposit * time * rate/12)/100

total = float(interest) + float(deposit)

print(f'Your {deposit:.2f} will be worth  ${total:.2f} in {time} months.')

#Programmer Name:      Ryan Burke
#Program description:  My program will display the net worth of investment over time and will compare three financial institution and their rates.
#Date:                 2/22/2023
#Version:             1.0

#Welcomes the user to the bank comparison program and ask if they want to quit if they didn't mean to start it
x = True
while x==True:
  user_input=input("Welcome to the bank comparison program!, press any key to continue or Q to Quit\n")
  if user_input.lower() == 'q':
        print("Thank you for using the bank comparison tool! Goodbye!")
        break

  # Asks the user for their initial deposit.
  deposit = float(input('Please enter deposit amount:$ '))

  # Asks the user for how long they want to hold their savings for.
  time = int(input('How many months will you hold your savings: '))

  # Asks for institution's names.
  bank1 = (input("Please enter your first institution name: "))
  bank2 = (input("Please enter your second institution name: "))
  bank3 = (input("Please enter your third institution name: "))

  # Asks for institution's rates.
  rate1 = float(input("Please enter  your first institution rate: "))
  rate2 = float(input("Please enter your second institution rate: "))
  rate3 = float(input("Please enter your thrid institution rate: "))



  # Calculate interest and total amount for each bank
  interest1 = float(deposit * time * rate1/12)/100
  total1 = deposit + interest1

  interest2 = float(deposit * time * rate1/12)/100
  total2 = deposit + interest2

  interest3 = float(deposit * time * rate1/12)/100
  total3 = deposit + interest3


  # Rank the banks based on interest and total earned
  sorted_banks = sorted([(bank1, interest1, total1), (bank2, interest2, total2), (bank3, interest3, total3)], key=lambda x: x[1], reverse=True)
  print("\nRanking:")
  for i, (bank, interest, total) in enumerate(sorted_banks):
      print(f"{i + 1}. {bank} with a deposit of ${deposit} earned ${interest:.2f} in interest for a new total of ${total:.2f}")

#Ask the user if they want to quit or run the program again with different banks and interest rates inputs
  user_input2=input("Thank you for using the bank comparison program. Would you like to run it again? (y/n)\n")
  if user_input2.lower() == 'n':
        print("Thank you for using the bank comparison tool! Goodbye!")
        x = False
      
      
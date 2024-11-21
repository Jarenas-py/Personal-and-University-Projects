def taxRate(gross_Pay):
      if gross_Pay in range(0, 10001): 
            print("Tax Rate= 0%")
      elif gross_Pay in range(10001, 50001):
            print("Tax Rate= 10%")
      elif gross_Pay > 50000:
            print("Tax Rate= 40%")
      else:
            print("Enter a valid input.")
            
def taxAmount(gross_Pay):
      if gross_Pay in range(0, 10001): 
            print("Tax Amount= 0")
            return 0+0
      elif gross_Pay in range(10001, 50001):
            taxConvert= 10/100
            realtaxAmount= gross_Pay * taxConvert
            print(f"Tax Amount= {realtaxAmount}")
            return realtaxAmount
      elif gross_Pay > 50000:
            taxConvert= 40/100
            realtaxAmount= gross_Pay * taxConvert
            print(f"Tax Amount= {realtaxAmount}")
            return realtaxAmount
            
def netPay(gross_Pay):
      realnetPay= gross_Pay + taxAmount(gross_Pay)
      return realnetPay

gross_Pay= int(input("Enter the gross pay: "))
print(f"Net Pay= {netPay(gross_Pay)}")

"""Create a program that ouputs the following
Tax Rate: 
Tax Amount: 
Amount to Pay after Taxes: 

If the gross pay is less than 10000, then tax rate is 0%
If the gross pay is equal to and more than 10000 but less than 50000, then tax rate is 10%, then tax rate is 0%
If the tax is more than or equal to 50000, then tax rate is 40%"""
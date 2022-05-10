# 3. Write a Python program to display the current date and time.
# Sample Output :
# Current date and time :
# 2014-07-05 14:34:14

import datetime

today = datetime.date.today()
now = datetime.datetime.now()

current_time = now.strftime("%H:%M:%S")

print(today)
print(current_time)
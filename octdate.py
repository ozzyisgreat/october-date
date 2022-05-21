#!/bin/python3
import time

#10/1/2021 in unix time (12 am)
oct = 1633060800

#get the current unix time and round it
curr = round(time.time())

#subtract the current unix time from the unix time of 10/1/2021 which returns the seconds since 10/1/2021
seconds = curr - oct

#convert seconds to days and round it
days = round(seconds / 86400)

print(f"its {days} in october time")

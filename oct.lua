require "os"
require "math"

cur = os.time(os.date("!*t"))
past = cur - 1633060800
day = past / 86400
day = math.floor(day)

print("its october "..day)

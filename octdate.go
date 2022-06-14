package main

import "time"
import "fmt"

func main() {
        var oct int64 = 1633060800
        var sec int64 = time.Now().Unix() - oct
        var day int64 = sec / 86400
        fmt.Println("its october", day)
}

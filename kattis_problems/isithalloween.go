package main

import "fmt"

func isHalloween(month string, day int) bool {
    if month == "DEC" && day == 25 {
        return true
    } else if month == "OCT" && day == 31{
        return true
    }
    
    return false
}

func main() {
    var month string
    var day int
    fmt.Scanf("%s %d", &month, &day)
    
    if isHalloween(month, day){
        fmt.Println("yup")
    }else {
        fmt.Println("nope")
    }
}

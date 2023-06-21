package main

import "fmt"

func mixed_fraction( numer int , denom int) (int, int, int){
    var whole, remain int
    whole = numer/denom
    remain = numer % denom
    return whole, remain, denom
}

func main() {
    for {
        var numer, denom int
        fmt.Scanf("%d %d", &numer, &denom)
        //check if input is done
        if ( numer == 0 && denom == 0){
            break
        }
        whole, a, b := mixed_fraction(numer, denom)
        fmt.Printf("%d %d / %d\n", whole, a, b)
    }
}

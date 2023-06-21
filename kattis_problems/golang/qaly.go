package main

import "fmt"

type qofl struct{
    quality float64
}

func (q *qofl ) cal_qual(quality, years float64){
    q.quality += years * quality
}

func main() {
    test := qofl{quality: 0}
    var n int
    
    fmt.Scanf("%d", &n) 
    
    for i := 0; i < n; i++ {
        var qual, years float64
        fmt.Scanf("%f %f", &qual, &years) 
        test.cal_qual(qual, years)
    }
    
   fmt.Printf("%.4f", test.quality)
}

package main

import(
     "fmt"
)

func calc_bpm( beats float64, sec float64) float64 {
    return   60 * beats / sec
}

func calc_abpm(beats float64, sec float64) float64 {
    return 60/(sec/beats)
    
}

func main() {
    var tests int
    _,_ = fmt.Scanf("%d", &tests)
    
    for i:= 0 ; i < tests; i++ {
        var beats float64
        var sec float64
        
        
        _,_ = fmt.Scanf("%f %f", &beats, &sec)
        
        fmt.Printf("%.4f %.4f %.4f\n",calc_abpm(beats - 1,sec), calc_bpm(beats,sec), calc_abpm(beats + 1,sec))
    }
}

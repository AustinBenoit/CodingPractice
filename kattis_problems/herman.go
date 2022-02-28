package main

import (
    "fmt"
    "math"
)

func euclid_circle (radius int ) float64 {
    return math.Pi * float64(radius) * float64(radius)
}

func taxi_circle ( radius int) float64{
    return 2 * float64(radius) * float64(radius)
} 

func main() {
    var radius int
    fmt.Scanf("%d", &radius)
    area_euclid := euclid_circle(radius)
    area_taxi := taxi_circle(radius)
    fmt.Printf("%.8f\n%.8f", area_euclid, area_taxi)
}

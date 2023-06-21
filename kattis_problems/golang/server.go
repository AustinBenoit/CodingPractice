package main

import "fmt"

func task_comp(test int, time int) int{
     for i:=1; i <= test; i++ {
        var task int
        fmt.Scanf("%d", &task)
        time -= task
        //task fits exactly in
        if time == 0 {
            return i;
            break
        }
        //task was too long to be completed
        if time < 0{
            return i - 1;
            break 
        }   
    }
    return test
}

func main() {
    var test, time int
    
    fmt.Scanf("%d %d", &test, &time)
    task_done := task_comp(test, time)
    fmt.Printf("%d", task_done)
}

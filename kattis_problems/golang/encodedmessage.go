package main

import(
    "fmt"
    "math"
    "bufio"
    "os"
)

func decrypt(encrypted_str string) string{
    str_len := len(encrypted_str);
    side_len := int(math.Sqrt(float64(str_len)))
    out_str := ""
    
    for j := side_len - 1 ; j >= 0; j--{
        for i := 0 ; i < side_len; i++{
            rotate_char := encrypted_str[i * side_len + j]
            out_str = out_str + string(rotate_char)
        }
    }
    
    return out_str
}

func main() {
    input := bufio.NewReader(os.Stdin)
    var tests int
    fmt.Fscanf(input, "%d\n", &tests)
    
    for i := 0; i < tests; i++{
        var encrypted_str string
        fmt.Fscanf(input,"%s\n", &encrypted_str)
        decrypted_str := decrypt(encrypted_str)
        fmt.Printf("%s\n", decrypted_str)
    }
}

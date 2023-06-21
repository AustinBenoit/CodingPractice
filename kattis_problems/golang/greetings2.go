package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	message, _ := reader.ReadString('\n')

	eCount := strings.Count(message, "e")

	response := "h" + strings.Repeat("e", eCount*2) + "y"

	fmt.Println(response)
}

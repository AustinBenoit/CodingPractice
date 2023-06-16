package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
)

func main() {

	pat := os.Args[1]

	re, _ := regexp.Compile(pat)

	scanner := bufio.NewScanner(os.Stdin)

	for scanner.Scan() {
		if re.Match(scanner.Bytes()) {
			fmt.Println(scanner.Text())
		}
	}

}

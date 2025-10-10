package main

import (
	"fmt"
	"math"
	"sync"
)

func sumDivisors(x uint64) uint64 {
	var sum uint64 = 0
	sqrtX := uint64(math.Sqrt(float64(x)))

	for i := uint64(1); i <= sqrtX; i++ {
		if x%i == 0 {
			sum += i
			if i != x/i {
				sum += x / i
			}
		}
	}
	return sum
}

func main() {
	var n int
	fmt.Scan(&n)

	xs := make([]uint64, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&xs[i])
	}

	results := make([]uint64, n)
	var wg sync.WaitGroup
	wg.Add(n)

	for i := 0; i < n; i++ {
		go func(i int) {
			defer wg.Done()
			results[i] = sumDivisors(xs[i])
		}(i)
	}

	wg.Wait()

	for _, res := range results {
		fmt.Println(res)
	}
}

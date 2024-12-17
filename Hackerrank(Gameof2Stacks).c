int twoStacks(int maxSum, int a_count, int* a, int b_count, int* b) {
    
    int sumA = 0, sumB = 0;
    int countA = 0, countB = 0;
    while (countA < a_count && sumA + a[countA] <= maxSum) {
        sumA += a[countA];
        countA++;
    }
 
    int maxCount = countA; 
    while (countB < b_count && countB <= maxCount) {
        sumB += b[countB];
        countB++;
        
        while (sumA + sumB > maxSum && countA > 0) {
            countA--;
            sumA -= a[countA];
        }
    
        if (sumA + sumB <= maxSum) {
            maxCount = (countA + countB > maxCount) ? countA + countB : maxCount;
        }
    }
    return maxCount;
}

int maximum69Number(int num) {
    int temp = num;
    int a[10], n = 0, flag = 0;
    if (num == 9 || num == 6) {
        return 9;
    }
    while (temp > 0) {
        a[++n] = temp % 10; 
        if (a[n] == 6) {
            flag = 1;
        }
        temp = temp / 10;
    }
    if (flag == 0) {
        return num;
    }
    for (int i = n; i >= 1; i--) { 
        if (a[i] == 6) {
            a[i] = 9;
            break;
        }
    }
    int k = 0;
    for (int i = n; i >= 1; i--) { 
        k = a[i] + k * 10;
    }
    return k;
}

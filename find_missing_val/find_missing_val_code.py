def find_missing_val(lista, size):
    if lista[0] != 1:
        return 1

    if lista[size - 1] != (size + 1):
        return size + 1

    a = 0
    b = size - 1
    while b > a + 1:
        mid = (a + b) // 2
        if (lista[a] - a) != (lista[mid] - mid):
            b = mid
        elif (lista[b] - b) != (lista[mid] - mid):
            a = mid
    return lista[a] + 1

from find_missing_val_code import find_missing_val


def test_find_missing_val():
    lista = list(range(1, 101))
    lista.remove(6)
    assert find_missing_val(lista, 99) == 6

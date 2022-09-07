from merge_sort_code import merge_sort


def test_merge_sort():
    lista = [5, 4, 3, 2, 1]
    merge_sort(lista)
    assert lista == [1, 2, 3, 4, 5]

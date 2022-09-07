from remove_minimum_code import remove_smallest


def test_remove_smallest():
    assert remove_smallest([1, 2, 3, 4, 5]) == [2, 3, 4, 5]
    assert remove_smallest([2, 2, 1, 2, 1]) == [2, 2, 2, 1]


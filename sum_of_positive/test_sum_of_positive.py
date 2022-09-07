from sum_of_positive_code import positive_sum


def test_positive_sum():
    assert positive_sum([-1, -2, -3, -4, -5]) == 0
    assert positive_sum([1, -4, 7, 12]) == 20
    assert positive_sum([1, 2, 3, 4, 5]) == 15

from vowel_count_code import getCount


def test_getCount():
    assert getCount('AAAAAA') == 6
    assert getCount('emge1') == 2
    assert getCount('abracadabra') == 5
    assert getCount('bcdfghjklmnpqrstvwxyz') == 0

#!/usr/bin/python3
def complex_delete(a_dictionary, value):
    list_keys = list(a_dictionary.keys())

    for value_dicc in list_keys:
        if value == list(a_dictionary.keys()):
            del a_dictionary[value_dicc]

    return (a_dictionary)

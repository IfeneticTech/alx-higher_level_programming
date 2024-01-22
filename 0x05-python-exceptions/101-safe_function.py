#!/usr/bin/python3

def safe_function(fct, *args):
    import sys
    try:
        result = fct(*args)
    except Exception as y:
        sys.stderr.write("Exception: {}\n".format(y))
        result = None

    return (result)

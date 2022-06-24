#!/usr/bin/python3


def validUTF8(data):

    n_bytes = 0

    for d in data:
        bin_rep = format(d, '#010b')[-8:]

        if n_bytes == 0:
            for bit in bin_rep:
                if bit == '0':
                    break
                n_bytes += 1
            if n_bytes == 0:
                continue
            if n_bytes == 1 or n_bytes > 4:
                return False
        else:
            if (bin_rep[0] != 1 and bin_rep[1] != 0):
                return False
        n_bytes -= 1

    return n_bytes == 0
        
#!/usr/bin/python3
"""
    Method that determines if all the boxes can be opened.
"""

def canUnlockAll(boxes):
    """
        Return True if ALL boxes can be opened, else return False.
    """

    list_of_keys = [0]

    for key in list_of_keys:
        for idx in boxes[key]:
            if idx not in list_of_keys and idx < len(boxes):
                list_of_keys.append(idx)
    for i in range(len(boxes)):
        if i not in list_of_keys:
            return False
    return True
        
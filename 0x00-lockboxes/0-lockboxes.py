#!/usr/bin/python3
"""
Each box is numbered sequentially from 0 to n - 1
and each box may contain keys to the other boxes.
"""


def canUnlockAll(boxes):
    """method that determines if all the boxes can be opened."""
    box = len(boxes)
    num_boxes = boxes[0]
    locked = [False] + [True] * (box - 1)
    for key in num_boxes:
        if ((key < box) and (locked[key] is True)):
            locked[key] = False
            num_boxes.extend(boxes[key])
    return not any(locked)

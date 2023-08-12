class Solution:
    def fn(self, x: int, y: int) -> int:
        return x + y

tests = [
    (
        (2, 4,),      # input tuple
        6,            # output
    ),
    (
        (45, 67,),    # input tuple
        112,          # output
    ),
]
#run by: pyleet fn.py
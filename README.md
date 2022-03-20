# push_swap
===========

The game is constituted of two lists, named l_a and l_b. At the start, l_b is empty and
l_a contains a certain amount of positive or negative unique numbers. The goal of the
game is to make it so l_a contains the same numbers, but in ascending order. To do so,
we only have the following operations :

• sa : swaps the first 2 elements of l_a
(does nothing if not enough elements)

• pa : takes the first element of l_b and puts it in first position in l_a
(if l_b is empty, does nothing)

• pb : takes the first element of l_a and puts it in first position in l_b
(if l_a is empty, does nothing)

The Program
========
./push_swap [l_a]

Example
========
./push_swap 2 1 3 6 5 8

sa pb pb pb sa pa pa pa

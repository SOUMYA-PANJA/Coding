avg(L,A):-
    sum_list(L,S),
    length(L,Len),
    A is S/Len.

my_avg([],0,0).
my_avg([H|T],R,S):-
    my_avg(T,R1,S1),
    R is R1+H,
    S is S1+1.

s([],0).
s([H|T],R):-
    s(T,R1),R is R1+H.

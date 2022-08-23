reverse2([],[]).
reverse2([H|T],R):-
    reverse2(T,Trev),
    append(Trev,[H],R).

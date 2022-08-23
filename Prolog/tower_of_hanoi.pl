tower(1,X,Y,_):-
    write('Move top disk from '),write(X),write(' to '),
    write(Y),nl.
tower(N,X,Y,Z):-
    N>1,
    M is N-1,
    tower(M,X,Z,Y),
    tower(1,X,Y,_),
    tower(M,Z,Y,X).

max_list([],0).
max_list([H|T],M):-
    max_list(T,TM),
    H>TM,
    M is H.
max_list([H|T],M):-
    max_list(T,TM),
    H=<TM,
    M is TM.

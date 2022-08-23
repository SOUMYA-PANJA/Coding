l_member(X,[X|_]).
l_member(X,[_|T]):-
    l_member(X,T).
